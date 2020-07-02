//
//  PlaySoundKeyboardView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/29.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import JXSegmentedView
import AVFoundation

protocol PlaySoundKeyboardViewDelegate: class {
    func playSoundKeyboardView(view: PlaySoundKeyboardView, itemDidSelected index: Int)
}

class PlaySoundKeyboardView: UIView {
    
    public class KeyboardTapGestureRecognizer: UITapGestureRecognizer {
        var itemIndex: Int = 0
    }
    
    public enum KBScrollDirection {
        case Horizontal, Vertical
    }
    
    private let sectionLeftOffset: CGFloat = 15
    private let sectionTopOffset: CGFloat = 15
    private var itemWidth: CGFloat = 82.5
    private var itemHeight: CGFloat = 82.5
    private let itemOffset: CGFloat = 5
    
    private let totalRow: Int = 3
    private let totalColumn: Int = 4
    
    private var direction: KBScrollDirection = .Vertical
    
    public weak var delegate: PlaySoundKeyboardViewDelegate?

    private var segmentedView: JXSegmentedView!
    private var segmentedDataSource: JXSegmentedTitleDataSource!
    
    private var scrollView: UIScrollView!
    private var scrollPage: Int = 0
    
    private var pageSegmentedView: JXSegmentedView!
    private var pageSegmentedDataSource: JXSegmentedTitleDataSource!
    
    private var segmentTitles: [String] = []
    
    private var itemPos: [Int] = []
    private var itemTitles: [String] = []
    
    private var soundRes = [String]()
    private var player: AVAudioPlayer!
    
    public var model: PlaySoundKeyboardViewModel! {
        didSet {
            guard model != nil else {
                return
            }
            self.segmentTitles = model.segmentTitles
            self.itemPos = model.playsoundVms.map({ (vm) -> Int in
                return vm.index
            })
            self.itemTitles = model.playsoundVms.map({ (vm) -> String in
                return vm.titleText
            })
            self.reloadData()
        }
    }
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.initParams()
        self.initViews()
        self.initDatas()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func initParams() {
        let tOffset = (self.sectionLeftOffset*2+self.itemOffset*CGFloat(self.totalColumn-1))
        let itemWidth = (self.bounds.width-tOffset)/CGFloat(self.totalColumn)
        self.itemWidth = itemWidth
        self.itemHeight = itemWidth
    }
    
    private func initViews() {
        self.backgroundColor = UIColor(white: 0, alpha: 0.5)
        self.removeAllMarks()
        self.initSegmentView()
        self.initScrollView()
        self.setupScollView()
        self.initPageSegmentView()
    }
    
    private func initDatas() {
        var pos = self.itemPositions()
        pos.append(35)
        pos.append(36)
        pos.append(45)
        self.initItemList(positions: pos)
        
        self.setupPageSegmentTitles()
        
        self.scrollView.contentSize = self.scrollContentSize()
        
        self.soundRes = self.soundResNames()
    }
    
    /// 本地音频文件
    private func soundResNames() -> [String] {
        var names = [String]()
        for idx in 1...96 {
            names.append("Piano\(idx).mp3")
        }
        return names
    }
    
    private func initSegmentView() {
        segmentedView = JXSegmentedView()
        let frame = CGRect(x: 0, y: 0, width: self.bounds.width, height: 48)
        segmentedView.frame = frame
        segmentedView.delegate = self
        self.addSubview(self.segmentedView)
        
        //segmentedDataSource一定要通过属性强持有，不然会被释放掉
        segmentedDataSource = JXSegmentedTitleDataSource()
        //配置数据源相关配置属性
        segmentedDataSource.titles = self.segmentTitles
        segmentedDataSource.isTitleColorGradientEnabled = true
        //关联dataSource
        segmentedView.dataSource = self.segmentedDataSource
        
        let indicator = JXSegmentedIndicatorLineView()
        indicator.indicatorWidth = 20
        segmentedView.indicators = [indicator]
    }
    
    private func initPageSegmentView() {
        let pageWidth: CGFloat = self.bounds.width
        let pageHeight: CGFloat = 48
        let x = (self.bounds.width-pageWidth)/2
        let y = (self.bounds.height-pageHeight-15)
        let frame = CGRect(x: x, y: y, width: pageWidth, height: pageHeight)
        pageSegmentedView = JXSegmentedView()
        pageSegmentedView.frame = frame
        pageSegmentedView.delegate = self
        self.addSubview(self.pageSegmentedView)
        
        //segmentedDataSource一定要通过属性强持有，不然会被释放掉
        pageSegmentedDataSource = JXSegmentedTitleDataSource()
        //配置数据源相关配置属性
        pageSegmentedDataSource.titles = []
        pageSegmentedDataSource.isTitleColorGradientEnabled = true
        //关联dataSource
        pageSegmentedView.dataSource = self.pageSegmentedDataSource
        
        let indicator = JXSegmentedIndicatorLineView()
        indicator.indicatorWidth = 20
        pageSegmentedView.indicators = [indicator]
    }
    
    private func setupSegmentTitles() {
        self.segmentedDataSource.titles = self.segmentTitles
        self.segmentedDataSource.reloadData(selectedIndex: 0)
        self.segmentedView.reloadData()
    }
    
    private func initScrollView() {
        let scrollView = UIScrollView(frame: CGRect(x: 0, y: 48, width: self.bounds.width, height: self.bounds.height-48))
        self.addSubview(scrollView)
        scrollView.backgroundColor = .lightText
        self.scrollView = scrollView
    }
    
    private func setupScollView() {
        self.scrollView.isPagingEnabled = true
        self.scrollView.showsVerticalScrollIndicator = false
        self.scrollView.showsHorizontalScrollIndicator = false
        self.scrollView.delegate = self
    }
    
    private func itemPositions() -> [Int] {
        var positions = [Int]()
        for index in 0...25 {
            positions.append(index)
        }
        return positions
    }
 
    private func initItemList(positions: [Int], isAutoFullEmpty: Bool = false) {
        for item in positions {
            var frame: CGRect = .zero
            if self.direction == .Vertical {
                frame = self.positionToVerticalFrame(position: item)
            }else if self.direction == .Horizontal{
                frame = self.positionToFrame(position: item)
            }
            self.drawItem(frame: frame, title: "\(item)", position: item)
        }
    }
    
    private func initItemList(positions: [Int], titles: [String], isAutoFullEmpty: Bool = false) {
        for item in positions {
            var frame: CGRect = .zero
            if self.direction == .Vertical {
                frame = self.positionToVerticalFrame(position: item)
            }else if self.direction == .Horizontal{
                frame = self.positionToFrame(position: item)
            }
            self.drawItem(frame: frame, title: titles[item], position: item)
        }
    }
    
    private func drawItem(frame: CGRect, title: String, position: Int) {
        let view = UINib(nibName: String(describing: PlaySoundKeyboardItemView.classForCoder()), bundle: nil).instantiate(withOwner: nil, options: nil).last as! PlaySoundKeyboardItemView
        let color = UIColor(red: randomCGFloatNumber(lower: 0, upper: 1), green: randomCGFloatNumber(lower: 0, upper: 1), blue: randomCGFloatNumber(lower: 0, upper: 1), alpha: randomCGFloatNumber(lower: 0.5, upper: 1))
        view.bgView.backgroundColor = .clear
        view.frame = frame
        view.titleLabel.text = title
        
        // 点击事件
        let tap = KeyboardTapGestureRecognizer(target: self, action: #selector(itemDidSelected(tap:)))
        tap.itemIndex = position
        view.addGestureRecognizer(tap)
        
        let bgView = RadialGradientView(frame: frame)
        bgView.layer.cornerRadius = 8
        bgView.layer.masksToBounds = true
        view.frame = bgView.bounds
        bgView.addSubview(view)
        
        self.scrollView.addSubview(bgView)
    }
    
    @objc
    private func itemDidSelected(tap: KeyboardTapGestureRecognizer) {
        let index = tap.itemIndex
        self.delegate?.playSoundKeyboardView(view: self, itemDidSelected: index)
//        let randomName = self.soundRes.randomElement()
//        guard let url = Bundle.main.url(forResource: randomName, withExtension: nil) else {return}
//        let player = try? AVAudioPlayer(contentsOf: url)
//        self.player = player
//        self.player?.play()
    }
    
    private func positionToFrame(position: Int) -> CGRect {
        
        let rowIdx = (position)%self.totalColumn
        var columnIdx = (position)/self.totalColumn
        
        print("rowIdx = \(rowIdx), columnIdx = \(columnIdx)")
        
        if position > 0, position % (self.totalRow*self.totalColumn) == 0 {
            self.scrollPage += 1
            print("page = \(self.scrollPage)")
        }else if position > 0, position/(self.totalRow*self.totalColumn) > self.scrollPage {
            self.scrollPage = position/(self.totalRow*self.totalColumn)
            print("page = \(self.scrollPage)")
        }
        
        columnIdx = columnIdx % self.totalRow
        
        let fRowIdx = CGFloat(rowIdx)
        let widths = fRowIdx*self.itemWidth
        let hoffsets = (fRowIdx)*self.itemOffset
        let pageOffset = CGFloat(self.scrollPage)*self.bounds.width
        let x = self.sectionLeftOffset + widths + hoffsets + pageOffset
        
        let fcolumnIdx = CGFloat(columnIdx)
        let heights = fcolumnIdx*self.itemHeight
        let voffsets = (fcolumnIdx)*itemOffset
        let y = self.sectionTopOffset + heights + voffsets
        
        let frame = CGRect(x: x, y: y, width: self.itemWidth, height: self.itemHeight)
        print("position = \(position) \n frame = \(frame.debugDescription)")
        return frame
    }
    
    private func positionToVerticalFrame(position: Int) -> CGRect {
        
        var rowIdx = (position)/self.totalRow
        let columnIdx = (position)%self.totalRow
        
        print("rowIdx = \(rowIdx), columnIdx = \(columnIdx)")
        
        if position > 0, position % (self.totalRow*self.totalColumn) == 0 {
            self.scrollPage += 1
            print("page = \(self.scrollPage)")
        }else if position > 0, position/(self.totalRow*self.totalColumn) > self.scrollPage {
            self.scrollPage = position/(self.totalRow*self.totalColumn)
            print("page = \(self.scrollPage)")
        }

        rowIdx = rowIdx % self.totalColumn
        
        let fRowIdx = CGFloat(rowIdx)
        let widths = fRowIdx*self.itemWidth
        let hoffsets = (fRowIdx)*self.itemOffset
        let pageOffset = CGFloat(self.scrollPage)*self.bounds.width
        let x = self.sectionLeftOffset + widths + hoffsets + pageOffset
        
        let fcolumnIdx = CGFloat(columnIdx)
        let heights = fcolumnIdx*self.itemHeight
        let voffsets = (fcolumnIdx)*itemOffset
        let y = self.sectionTopOffset + heights + voffsets
        
        let frame = CGRect(x: x, y: y, width: self.itemWidth, height: self.itemHeight)
        print("position = \(position) \n frame = \(frame.debugDescription)")
        return frame
    }
    
    /// 当前页数下滚动范围
    private func scrollContentSize() -> CGSize {
         return CGSize(width: CGFloat(self.scrollPage+1)*self.bounds.width, height: 0)
    }
    
    /// 设置翻页标题
    private func setupPageSegmentTitles() {
        self.pageSegmentedDataSource.titles = self.pageSegmentTitles(pageCount: self.scrollPage+1)
        self.pageSegmentedDataSource.reloadData(selectedIndex: self.scrollPage)
        self.pageSegmentedView.reloadData()
    }
    
    /// 翻页titles
    /// - Parameter pageCount: 页数
    private func pageSegmentTitles(pageCount: Int) -> [String] {
        var titles = [String]()
        for idx in 0..<pageCount {
            titles.append(self.upperLetters()[idx])
        }
        return titles
    }
    
    /// 大写字母表
    private func upperLetters() -> [String] {
        var letters = [String]()
        for index in 65...90 {
            let letter = Character(UnicodeScalar(index)!)
            letters.append(String(letter))
        }
        return letters
    }
    
    private func randomUpperLetters() -> [String] {
        var letters = [String]()
        for index in Int(randomCGFloatNumber(lower: 20, upper: 40))...Int(randomCGFloatNumber(lower: 90, upper: 120)) {
            let letter = Character(UnicodeScalar(index)!)
            letters.append(String(letter))
        }
        return letters
    }
    
    private func removeAllMarks() {
        self.subviews.forEach { (sub) in
            sub.removeFromSuperview()
        }
    }
    
    private func reloadData() {
        self.scrollPage = 0
        self.scrollView.subviews.forEach { (sub) in
            sub.removeFromSuperview()
        }
        self.setupSegmentTitles()
        self.initItemList(positions: self.itemPos, titles: self.itemTitles)
        self.setupPageSegmentTitles()
        self.scrollView.contentSize = self.scrollContentSize()
        self.pageSegmentedView.selectItemAt(index: 0)
        self.pageSegmentedView.reloadData()
    }

}
extension PlaySoundKeyboardView: JXSegmentedViewDelegate {
    func segmentedView(_ segmentedView: JXSegmentedView, didSelectedItemAt index: Int) {
        if segmentedView.isEqual(self.pageSegmentedView) {
            let point = CGPoint(x: CGFloat(segmentedView.selectedIndex)*self.bounds.width, y: 0)
            self.setupScrollViewContentOffset(point: point)
        }else if segmentedView.isEqual(self.segmentedView) {
            
            let newTitles = self.randomUpperLetters()
            var pos = [Int]()
            for idx in newTitles.enumerated() {
                pos.append(idx.offset)
            }
            self.itemPos = pos
            self.itemTitles = newTitles
            // 更新数据
            self.reloadData()
        }
    }
    
    private func setupScrollViewContentOffset(point: CGPoint) {
        self.scrollView.setContentOffset(point, animated: true)
    }
}
extension PlaySoundKeyboardView: UIScrollViewDelegate {
    func scrollViewDidEndDecelerating(_ scrollView: UIScrollView) {
        let scrollPage = scrollView.contentOffset.x/self.bounds.width
        self.pageSegmentedView.selectItemAt(index: Int(scrollPage))
    }
}
