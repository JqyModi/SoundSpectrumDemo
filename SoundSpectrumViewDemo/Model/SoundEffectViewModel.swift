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
        var level: Int = 0
        self.playSounds.forEach { (psvm) in
            if psvm.indexLevel > level {
                level = psvm.indexLevel
            }
        }
        return level
    }
    
}
