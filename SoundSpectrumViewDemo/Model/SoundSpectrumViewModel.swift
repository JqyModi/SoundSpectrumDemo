
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
    
    public var audioURL: URL? {
        return Bundle.main.url(forResource: "rain_love.mp3", withExtension: nil)
    }
    
    public var widthPerSecond: CGFloat {
        return 50
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
    
    private var module: AEAudioFilePlayer? {
        guard let url = audioURL else { return nil }
        return try? AEAudioFilePlayer(url: url)
    }
    
    public var maxScrollWidth: CGFloat {
        return CGFloat(self.duration)*self.widthPerSecond
    }
    
    public var playChordFrameXs: [CGFloat] {
        return self.randomChordPlayX()
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
    
    /// 获取随机音效长度
    private func randomEffectMarkWidth(randomMax: Int = 20) -> [CGFloat] {
        var ws = [CGFloat]()
        for _ in 0..<randomMax {
            let w = randomCGFloatNumber(lower: 10, upper: 100)
            ws.append(w)
        }
        return ws
    }
    
    /// 获取随机行下标
    private func randomLineIndex(randomMax: Int = 20) -> [Int] {
        var idxs = [Int]()
        for _ in 0..<randomMax {
            let idx = randomCGFloatNumber(lower: 0, upper: 4)
            idxs.append(Int(idx))
        }
        return idxs
    }
    
    public func configView(view: SoundSpectrumView) {
        view.model = self
    }
}
