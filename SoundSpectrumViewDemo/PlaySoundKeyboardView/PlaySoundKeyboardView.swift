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
    
    private let totalLine: Int = 3
    private let totalColumn: Int = 4

    private var segmentedView: JXSegmentedView!
    private var segmentedDataSource: JXSegmentedTitleDataSource!
    
    private var scrollView: UIScrollView!
    
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
    }
    
    private func itemPositions() -> [Int] {
        var positions = [Int]()
        for index in 1...25 {
            positions.append(index)
        }
        return positions
    }
 
    private func initItemList(positions: [Int], isAutoFullEmpty: Bool = false) {
        for item in positions {
            let frame = self.positionToFrame(position: item)
            self.drawItem(frame: frame)
        }
    }
    
    private func drawItem(frame: CGRect) {
        let view = UINib(nibName: String(describing: PlaySoundKeyboardItemView.classForCoder()), bundle: nil).instantiate(withOwner: nil, options: nil).last as! PlaySoundKeyboardItemView
        let color = UIColor(red: randomCGFloatNumber(lower: 0, upper: 1), green: randomCGFloatNumber(lower: 0, upper: 1), blue: randomCGFloatNumber(lower: 0, upper: 1), alpha: randomCGFloatNumber(lower: 0.5, upper: 1))
        view.bgView.backgroundColor = color
        self.scrollView.addSubview(view)
    }
    
    private func positionToFrame(position: Int) -> CGRect {
        let lineIdx = position/self.totalLine
        let columnIdx = position%self.totalColumn
        let flineIdx = CGFloat(lineIdx)
        let widths = flineIdx*self.itemWidth
        let hoffsets = (flineIdx-1)*self.itemOffset
        let x = self.sectionLeftOffset + widths + hoffsets
        let fcolumnIdx = CGFloat(columnIdx)
        let heights = fcolumnIdx*self.itemHeight
        let voffsets = (fcolumnIdx-1)*itemOffset
        let y = self.sectionTopOffset + heights + voffsets
        let frame = CGRect(x: x, y: y, width: self.itemWidth, height: self.itemHeight)
        return frame
    }

}
extension PlaySoundKeyboardView: JXSegmentedViewDelegate {
    func segmentedView(_ segmentedView: JXSegmentedView, didSelectedItemAt index: Int) {
        
    }
}

