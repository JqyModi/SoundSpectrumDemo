//
//  EffectMarkItemViewModel.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/7/1.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class EffectMarkItemViewModel {
    
    private var lineCount: Int = 1
    
    private let lineOffset: CGFloat = 8.ratioHeight
    private let markHeight: CGFloat = 8.ratioHeight
    private let widthPerSecond: Double = 30
    
    private var playSound: PlaySoundViewModel
    private var containerViewHeight: CGFloat
    
    public var drawAnimate: Bool = false
    
    init(playSound: PlaySoundViewModel, lineCount: Int, containerViewHeight: CGFloat) {
        self.playSound = playSound
        self.lineCount = lineCount
        self.containerViewHeight = containerViewHeight
        // 动画
        self.drawAnimate = playSound.drawAnimate
    }
    
    public var playSoundVM: PlaySoundViewModel {
        return self.playSound
    }
    
    public var frameX: CGFloat {
        return CGFloat(self.widthPerSecond * playSound.userClickTimeOffset)
    }
    
    public var frameWidth: CGFloat {
        return CGFloat(self.widthPerSecond * playSound.duration)
    }
    
    public var index: Int {
        return playSound.index
    }
    
    public var indexLevel: Int {
        return playSound.indexLevel
    }
    
    public var colorIndex: Int {
        return playSound.colorIndex
    }
    
    public var timeOffset: Double {
        return playSound.userClickTimeOffset
    }
    
    public var headColor: UIColor {
        return .red
    }
    
    public var tailColor: UIColor {
        return .red
    }
    
    public class func createMarkView() -> EffectMarkItemView? {
        guard let mark = Bundle.main.loadNibNamed(String(describing: EffectMarkItemView.classForCoder()), owner: nil, options: nil)?.last as? EffectMarkItemView else {return nil}
        return mark
    }
    
    public func markFrame() -> CGRect {
        let tOffset = CGFloat(self.lineCount-1)*self.lineOffset
        let tHeight = CGFloat(self.lineCount)*self.markHeight
        let lineTopY = (self.containerViewHeight - (tOffset+tHeight))/2
        let y = lineTopY+CGFloat(self.colorIndex)*(self.markHeight+self.lineOffset)
        let frame = CGRect(x: frameX, y: y, width: frameWidth, height: markHeight)
        return frame
    }
    
    public func configView(view: EffectMarkItemView) {
        view.head.backgroundColor = headColor
        view.tail.backgroundColor = tailColor
    }
}
