//
//  PlaySoundKeyboardView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/29.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import JXSegmentedView

class PlaySoundKeyboardView: UIView {
    
    private let sectionLeftOffset: CGFloat = 15
    private let sectionTopOffset: CGFloat = 0
    private let itemWidth: CGFloat = 82.5
    private let itemHeight: CGFloat = 82.5
    private let itemOffset: CGFloat = 5
    
    private let totalRow: Int = 3
    private let totalColumn: Int = 4

    private var segmentedView: JXSegmentedView!
    private var segmentedDataSource: JXSegmentedTitleDataSource!
    
    private var scrollView: UIScrollView!
    private var contentView: UIView!
    private var scrollPage: Int = 0
    
    private var titles: [String] = []
    
    init(frame: CGRect, titles: [String]) {
        super.init(frame: frame)
        self.titles = titles
        self.initViews()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func initViews() {
        self.backgroundColor = UIColor(white: 0, alpha: 0.5)
        self.initSegmentView()
        self.initScrollView()
        
        let pos = self.itemPositions()
        self.initItemList(positions: pos)
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
        segmentedDataSource.titles = self.titles
        segmentedDataSource.isTitleColorGradientEnabled = true
        //关联dataSource
        segmentedView.dataSource = self.segmentedDataSource
        
        let indicator = JXSegmentedIndicatorLineView()
        indicator.indicatorWidth = 20
        segmentedView.indicators = [indicator]
    }
    
    private func initScrollView() {
        let scrollView = UIScrollView(frame: CGRect(x: 0, y: 48, width: self.bounds.width, height: self.bounds.height-48))
        self.addSubview(scrollView)
        scrollView.backgroundColor = .lightText
        self.scrollView = scrollView
        let contentView = UIView(frame: CGRect(x: 0, y: 48, width: self.bounds.width*3, height: (self.bounds.height-48)*3))
        self.scrollView.addSubview(contentView)
        self.contentView = contentView
        self.scrollView.contentSize = self.contentView.frame.size
        self.scrollView.isPagingEnabled = true
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
            let frame = self.positionToFrame(position: item)
            self.drawItem(frame: frame, position: item)
        }
    }
    
    private func drawItem(frame: CGRect, position: Int) {
        let view = UINib(nibName: String(describing: PlaySoundKeyboardItemView.classForCoder()), bundle: nil).instantiate(withOwner: nil, options: nil).last as! PlaySoundKeyboardItemView
        let color = UIColor(red: randomCGFloatNumber(lower: 0, upper: 1), green: randomCGFloatNumber(lower: 0, upper: 1), blue: randomCGFloatNumber(lower: 0, upper: 1), alpha: randomCGFloatNumber(lower: 0.5, upper: 1))
        view.bgView.backgroundColor = color
        view.frame = frame
        view.titleLabel.text = "\(position)"
        self.contentView.addSubview(view)
    }
    
    private func positionToFrame(position: Int) -> CGRect {
        
        if position > 0, position % (3*4) == 0 {
            self.scrollPage += 1
        }
        
        print("page = \(self.scrollPage)")
        
        let rowIdx = (position)%self.totalColumn
        let columnIdx = (position)/self.totalColumn
        
        print("rowIdx = \(rowIdx), columnIdx = \(columnIdx)")
        
        let fRowIdx = CGFloat(rowIdx)
        let widths = fRowIdx*self.itemWidth
        let hoffsets = (fRowIdx-1)*self.itemOffset
        var x = self.sectionLeftOffset + widths + hoffsets
        
        let fcolumnIdx = CGFloat(columnIdx)
        let heights = fcolumnIdx*self.itemHeight
        let voffsets = (fcolumnIdx-1)*itemOffset
        var y = self.sectionTopOffset + heights + voffsets
        
        let frame = CGRect(x: x, y: y, width: self.itemWidth, height: self.itemHeight)
        print("position = \(position) \n frame = \(frame.debugDescription)")
        return frame
    }

}
extension PlaySoundKeyboardView: JXSegmentedViewDelegate {
    func segmentedView(_ segmentedView: JXSegmentedView, didSelectedItemAt index: Int) {
        
    }
}

