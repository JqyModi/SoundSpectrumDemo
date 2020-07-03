
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
    
    public var playsounds: [PlaySoundViewModel] = []
    
    private var randomXs = [CGFloat]()
    
    init(playsounds: [PlaySoundViewModel] = []) {
        self.playsounds = playsounds
//        if playsounds.isEmpty {
//            self.playsounds = self.playSounds()
//        }
        self.randomXs = self.randomChordPlayX()
    }
    
    public var audioURL: URL? {
        return Bundle.main.url(forResource: "rain_love.mp3", withExtension: nil)
    }
    
    public var widthPerSecond: CGFloat {
        return 30
    }
    
    public var cursorColor: UIColor {
        return .red
    }
    
    public var cursorLeftOffset: CGFloat {
        return 93.75
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
        return self.randomXs
    }
    
    public var effectMarks: SoundEffectViewModel {
        return SoundEffectViewModel(playSounds: self.playsounds)
    }
    
    /// 获取随机弹奏序列
    private func randomChordPlayX(randomMax: Int = 20) -> [CGFloat] {
        var xs = [CGFloat]()
        for _ in 0..<randomMax {
            let x = randomCGFloatNumber(lower: 5, upper: self.maxScrollWidth)
            xs.append(x)
        }
        return xs.sorted()
    }
    
    /// 随机获取弹奏音效数据
    /// - Parameter randomMax: 随机数
    private func playSounds(randomMax: Int = 20) -> [PlaySoundViewModel] {
        var psvms = [PlaySoundViewModel]()
        for item in 0...randomMax {
            let psvm = PlaySoundViewModel.playSoundViewModel(index: item, timeOffset: Double(randomCGFloatNumber(lower: 0, upper: CGFloat(self.duration))))
            psvms.append(psvm)
        }
        return psvms
    }
    
    public func configView(view: SoundSpectrumView) {
        view.model = self
    }
}
