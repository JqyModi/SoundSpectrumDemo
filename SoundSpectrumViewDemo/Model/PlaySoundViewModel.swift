//
//  PlaySoundViewModel.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/7/1.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import TheAmazingAudioEngine

class PlaySoundKeyboardViewModel: NSObject {
    
    public var segmentTitles: [String] {
        return ["场景", "情节", "国风", "嘻哈"]
    }
    
    public var playsoundVms: [PlaySoundViewModel] {
        var psvms = [PlaySoundViewModel]()
        for idx in 0...35 {
            let psvm = PlaySoundViewModel.playSoundViewModel(index: idx, timeOffset: Double(randomCGFloatNumber(lower: 0, upper: 33)))
            psvms.append(psvm)
        }
        return psvms
    }
    
    public func configView(view: PlaySoundKeyboardView) {
        view.model = self
    }
}
class PlaySoundViewModel: NSObject {
    
    public var titleText: String = ""
    
    public var backgroundColor: UIColor {
        return UIColor(red: randomCGFloatNumber(lower: 0, upper: 1), green: randomCGFloatNumber(lower: 0, upper: 1), blue: randomCGFloatNumber(lower: 0, upper: 1), alpha: randomCGFloatNumber(lower: 0.5, upper: 1))
    }
    
    public var audioName: String = ""
    
    public var index: Int = 0
    
    public var indexLevel: Int = 1
    
    public var colorIndex: Int = 1
    
    public var timeOffset: Double = 0
    
    public var duration: Double {
        return module?.regionDuration ?? 0
    }
    
    public var userClickTimeOffset: Double = 0
    
    public var audioURL: URL? {
        return Bundle.main.url(forResource: audioName, withExtension: nil)
    }
    
    public var module: AEAudioFilePlayer? {
        guard let url = audioURL else { return nil }
        return try? AEAudioFilePlayer(url: url)
    }
    
    /// 虚拟数据
    /// - Parameter index: 下标
    public class func playSoundViewModel(index: Int, timeOffset: Double = 0) -> PlaySoundViewModel {
        let psvm = PlaySoundViewModel()
        psvm.titleText = self.upperLetters().randomElement() ?? ""
        psvm.audioName = self.soundResNames().randomElement() ?? ""
        psvm.index = index
        psvm.indexLevel = Int(randomCGFloatNumber(lower: 0, upper: 4))
        psvm.userClickTimeOffset = timeOffset
        return psvm
    }
    
    /// 大写字母表
    private class func upperLetters() -> [String] {
        var letters = [String]()
        for index in 65...90 {
            let letter = Character(UnicodeScalar(index)!)
            letters.append(String(letter))
        }
        return letters
    }
    
    /// 本地音频文件
    private class func soundResNames() -> [String] {
        var names = [String]()
        for idx in 1...96 {
            names.append("Piano\(idx).mp3")
        }
        return names
    }
}
