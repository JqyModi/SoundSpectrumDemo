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

class SoundSpectrumView: UIView {
    
    private let widthPerSecond: CGFloat = 50
    private let audionDuration: TimeInterval = 33
    private let cursorLeftOffset: CGFloat = 93.75
    
    @IBOutlet weak var scrollView: UIScrollView!
    
    private var effectView: SoundEffectView?
    private var cursorView: UIView?
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.setupScrollView()
        self.initViews()
    }
    
    private func setupScrollView() {
        self.scrollView.backgroundColor = .clear
        self.scrollView.showsVerticalScrollIndicator = false
        self.scrollView.showsHorizontalScrollIndicator = false
        self.scrollView.contentSize = self.scrollContentSize()
        let edgeOffset: CGFloat = cursorLeftOffset
        self.scrollView.contentInset = UIEdgeInsets(top: 0, left: edgeOffset, bottom: 0, right: UIScreen.main.bounds.width-edgeOffset)
    }
    
    private func initViews() {
        self.backgroundColor = .black
        
        let frame = CGRect(origin: .zero, size: self.scrollContentSize())
        
        // wavefrom
        guard let audioURL = self.audioURL() else {return}
        let wave = SoundWaveView(audioURL: audioURL, frame: frame)
        self.scrollView.addSubview(wave)
        
        // chordPlays
        let cpv = ChordPlayView(frame: frame, lineXs: self.randomChordPlayX())
        self.scrollView.addSubview(cpv)
        
        // effects
        let randomMarkCount = 100
        let sev = SoundEffectView(frame: frame, lineXs: [], lineWs: [], lineIdxs: [])
        self.scrollView.addSubview(sev)
        self.effectView = sev
        
        // cursorView
        let cursor = UIView(frame: CGRect(x: self.cursorLeftOffset, y: 0, width: 1, height: self.bounds.height))
        cursor.backgroundColor = .red
        self.addSubview(cursor)
    }
    
    /// 获取随机弹奏序列
    private func randomChordPlayX(randomMax: Int = 20) -> [CGFloat] {
        var xs = [CGFloat]()
        for _ in 0..<randomMax {
            let x = randomCGFloatNumber(lower: 5, upper: self.maxScrollWidth())
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
    
    /// 清空marks
    public func clearAllMarks() {
        for item in self.scrollView.subviews {
            if item.isKind(of: SoundEffectView.self) {
                item.subviews.forEach { (subView) in
                    subView.removeFromSuperview()
                }
                return
            }
        }
    }
    
    public func updateProgress(second: Double) {
        let cpro = second/self.audionDuration
        let leftOffset = CGFloat(cpro)*self.maxScrollWidth()
//        self.scrollView.setContentOffset(CGPoint(x: leftOffset, y: 0), animated: false)
        if leftOffset.isEqual(to: 0) {
            self.scrollView.contentOffset.x = 0
        }else {
            DispatchQueue.main.async {
                UIView.animate(withDuration: 1, delay: 0, options: UIView.AnimationOptions.curveLinear, animations: {
                        self.scrollView.contentOffset.x = leftOffset
                }, completion: nil)
            }
        }
        
        self.randomEffectMark(frameX: leftOffset)
    }
    
    public func randomEffectMark(frameX: CGFloat) {
        let w = self.randomEffectMarkWidth().randomElement() ?? 0
        let line = self.randomLineIndex().randomElement() ?? 0
        self.effectView?.randomMark(frameX: frameX, frameWidth: w, lineIndex: line, animate: true)
    }
}
