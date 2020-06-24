//
//  SoundSpectrumView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/19.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

/// 生成随机数
/// - Parameter lower: 最小值
/// - Parameter upper: 最大值
public func randomCGFloatNumber(lower: CGFloat = 0,upper: CGFloat = 1) -> CGFloat {
    return CGFloat(Float(arc4random()) / Float(UInt32.max)) * (upper - lower) + lower
}

class SoundSpectrumView: UIImageView {
    
    private let widthPerSecond: CGFloat = 50
    private let audionDuration: TimeInterval = 33
    
    @IBOutlet weak var scrollView: UIScrollView!
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.setupScrollView()
        self.initViews()
    }
    
    private func setupScrollView() {
        self.scrollView.showsVerticalScrollIndicator = false
        self.scrollView.showsHorizontalScrollIndicator = false
        self.scrollView.contentSize = self.scrollContentSize()
        let edgeOffset: CGFloat = 80
        self.scrollView.contentInset = UIEdgeInsets(top: 0, left: edgeOffset, bottom: 0, right: edgeOffset)
    }
    
    private func initViews() {
        
        let frame = CGRect(origin: .zero, size: self.scrollContentSize())
        
        // wavefrom
        guard let audioURL = self.audioURL() else {return}
        let wave = SoundWaveView(audioURL: audioURL, frame: frame)
        self.scrollView.addSubview(wave)
        
        // chordPlays
        let cpv = ChordPlayView(frame: frame, lineXs: self.randomChordPlayX())
        self.scrollView.addSubview(cpv)
    }
    
    /// 获取随机弹奏序列
    private func randomChordPlayX() -> [CGFloat] {
        var xs = [CGFloat]()
        for _ in 0..<20 {
            let x = randomCGFloatNumber(lower: 5, upper: self.maxScrollWidth())
            xs.append(x)
        }
        return xs.sorted()
    }
    
    private func audioURL() -> URL? {
        return Bundle.main.url(forResource: "rain_love.mp3", withExtension: nil)
    }
    
    private func audioDuration() -> TimeInterval {
        return self.audionDuration
    }
    
    private func maxScrollWidth() -> CGFloat {
        return CGFloat(self.audionDuration)*self.widthPerSecond
    }
    
    private func scrollContentSize() -> CGSize {
        return CGSize(width: self.maxScrollWidth(), height: self.bounds.height)
    }
}
