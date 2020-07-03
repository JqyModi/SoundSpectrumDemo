//
//  SoundEffectViewModel.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/7/1.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class SoundEffectViewModel {
    
    private var playSounds: [PlaySoundViewModel]
    
    init(playSounds: [PlaySoundViewModel]) {
        self.playSounds = playSounds
        self.playSoundsColorIndex()
    }
    
    public func setPlaySounds(playSounds: [PlaySoundViewModel]) {
        self.playSounds = playSounds
    }
    
    public var playSoundItems: [PlaySoundViewModel] {
        return self.playSounds
    }
    
    public var markViewModels: [EffectMarkItemViewModel] {
        return self.playSounds.map { (psvm) -> EffectMarkItemViewModel in
            return EffectMarkItemViewModel(playSound: psvm, lineCount: self.lineCount, containerViewHeight: self.containerViewHeight)
        }
    }
    
    public var containerViewHeight: CGFloat = 100
    
    public var lineCount: Int {
        let sortLevels = self.playSounds.compactMap { (psvm) -> Int in
            return psvm.indexLevel
        }
        return sortLevels.sorted().removingDuplicates().count
    }
    
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
