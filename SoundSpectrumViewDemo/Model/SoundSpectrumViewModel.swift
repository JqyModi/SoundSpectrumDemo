
//
//  SoundSpectrumViewModel.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/7/1.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import TheAmazingAudioEngine

class SoundSpectrumViewModel {
    
    private var playsounds: [PlaySoundViewModel] = [] {
        didSet {
            self.innerEffectMarkModel = SoundEffectViewModel(playSounds: self.playsounds)
        }
    }
    private var innerAudioURL: URL
    private var chordPlays = [CGFloat]()
    private var innerWidthPerSecond: CGFloat
    private var innerCursorLeftOffset: CGFloat
    private var innerEffectMarkModel: SoundEffectViewModel?
    
    init(playsounds: [PlaySoundViewModel] = [], audioURL: URL, chordPlays: [CGFloat] = [], widthPerSecond: CGFloat = 30, cursorLeftOffset: CGFloat = 93.75) {
        self.playsounds = playsounds
        self.innerAudioURL = audioURL
        // 排序
        self.chordPlays = chordPlays.sorted()
        self.innerWidthPerSecond = widthPerSecond
        self.innerCursorLeftOffset = cursorLeftOffset
    }
    
    public var audioURL: URL? {
        return innerAudioURL
    }
    
    public var widthPerSecond: CGFloat {
        return self.innerWidthPerSecond
    }
    
    public var cursorColor: UIColor {
        return .white
    }
    
    public var cursorLeftOffset: CGFloat {
        return self.innerCursorLeftOffset
    }
    
    public var duration: TimeInterval {
        return module?.regionDuration ?? 0
    }
    
    public var module: AEAudioFilePlayer? {
        guard let url = audioURL else { return nil }
        return try? AEAudioFilePlayer(url: url)
    }
    
    public var maxScrollWidth: CGFloat {
        return CGFloat(self.duration)*self.widthPerSecond
    }
    
    public var playChordFrameXs: [CGFloat] {
        return self.chordPlays
    }
    
    public var effectMarkModel: SoundEffectViewModel? {
        return self.innerEffectMarkModel
    }
    
    public func configView(view: SoundSpectrumView) {
        view.widthPerSecond = self.widthPerSecond
        view.audionDuration = self.duration
        view.audioURL = self.audioURL
        view.cursorColor = self.cursorColor
        view.cursorLeftOffset = self.cursorLeftOffset
        view.maxScrollWidth = self.maxScrollWidth
        
        // 绘制View
        self.initViews(view: view)
        self.initDatas(view: view)
    }
    
    public func initViews(view: SoundSpectrumView) {
        view.setupScrollView()
        view.initViews()
    }
    
    public func initDatas(view: SoundSpectrumView) {
        // 绘制弹奏竖线
        view.chordPlayView.drawLines(lineXs: self.playChordFrameXs)
        // 绘制MarkViews
        self.redrawEffectMarks(view: view)
    }
    
    /// 新增Mark标记
    /// - Parameter psvm: 弹奏模型
    public func addEffectMark(psvm: PlaySoundViewModel) {
        var playSounds = self.playsounds
        playSounds.append(psvm)
        self.playsounds = playSounds
    }
    
    /// 绘制弹奏标记
    /// - Parameter view: -
    public func redrawEffectMarks(view: SoundSpectrumView) {
        // 绘制MarkView
        effectMarkModel?.configView(view: view.effectView)
    }
    
    /// 清空弹奏数据
    public func resetEffectMarks() {
        self.playsounds = []
    }
    
    // 记录上次命中对象
    private var recordPlaySound: PlaySoundViewModel!
    // 通播放时间秒播放命中音效
    public func playEffects(second: Double) {
        self.recordPlaySound = nil
        let rangeOffset: Double = 0.01
        let range = (second-rangeOffset...second+rangeOffset)
        self.effectMarkModel?.markViewModels.forEach { (markItem) in
            if range.contains(markItem.timeOffset) {
                if self.recordPlaySound != nil, self.recordPlaySound.titleText.elementsEqual(markItem.playSoundVM.titleText) {
                    print("相同对象只用一次")
                    return
                }
                guard let player = markItem.playSoundVM.module else {return}
                player.removeUponFinish = true
                AEPlayerKit.shared.play(player: player)
                self.recordPlaySound = markItem.playSoundVM
                return
            }
        }
    }
}
