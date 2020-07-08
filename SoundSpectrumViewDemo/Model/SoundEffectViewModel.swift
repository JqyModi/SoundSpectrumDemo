//
//  SoundEffectViewModel.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/7/1.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class SoundEffectViewModel {
    
    private var playSounds: [PlaySoundViewModel] = [] {
        didSet {
            self.playSoundsColorIndex()
            self.innerLineCount = self.calcLineCount()
            self.innerMarkViewModels = self.playSoundToEffectMarks()
        }
    }
    private var innerLineCount: Int = 0
    private var innerMarkViewModels: [EffectMarkItemViewModel] = []
    private var innerContainerViewHeight: CGFloat = 0
    
    init(playSounds: [PlaySoundViewModel], containerViewHeight: CGFloat = 120.ratioHeight) {
        self.playSounds = playSounds
        self.playSoundsColorIndex()
        self.innerLineCount = self.calcLineCount()
        self.innerContainerViewHeight = containerViewHeight
        self.innerMarkViewModels = self.playSoundToEffectMarks()
    }
    
    public var markViewModels: [EffectMarkItemViewModel] {
        return self.innerMarkViewModels
    }
    
    public var containerViewHeight: CGFloat {
        return self.innerContainerViewHeight
    }
    
    /// 计算当前模型集合中有几种颜色：几行
    public func calcLineCount() -> Int {
        let sortLevels = self.playSounds.compactMap { (psvm) -> Int in
            return psvm.indexLevel
        }
        return sortLevels.sorted().removingDuplicates().count
    }
    
    /// 转换弹奏模型对应的颜色行标
    private func playSoundsColorIndex() {
        let pss = self.playSounds.map { (psvm) -> Int in
            return psvm.indexLevel
        }
        let singleItems = pss.removingDuplicates()
        for item in self.playSounds.enumerated() {
            for sis in singleItems.enumerated() {
                if item.element.indexLevel == sis.element {
                    item.element.colorIndex = sis.offset
                }
            }
        }
    }
    
    /// 弹奏模型转绘图模型
    private func playSoundToEffectMarks() -> [EffectMarkItemViewModel] {
        let markModels = self.playSounds.map { (psvm) -> EffectMarkItemViewModel in
            return EffectMarkItemViewModel(playSound: psvm, lineCount: self.innerLineCount, containerViewHeight: self.containerViewHeight)
        }
        return markModels
    }
    
    public func configView(view: SoundEffectView) {
        // 移除之前的view
        view.removeAllMark()
        // 重新绘制
        self.initViews(view: view)
    }
    
    private func initViews(view: SoundEffectView) {
        self.innerMarkViewModels.forEach { (mark) in
            view.drawMark(markViewModel: mark)
            // 重置
            self.resetMarkAnimate()
        }
    }
    
    private func resetMarkAnimate() {
        self.playSounds.forEach { (item) in
            item.drawAnimate = false
        }
    }
    
}
extension Array where Element: Hashable {
    func removingDuplicates() -> [Element] {
        var addedDict = [Element: Bool]()

        return filter {
            addedDict.updateValue(true, forKey: $0) == nil
        }
    }

    mutating func removeDuplicates() {
        self = self.removingDuplicates()
    }
}
