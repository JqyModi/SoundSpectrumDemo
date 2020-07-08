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

protocol SoundSpectrumViewDelegate: class {
//    func soundSpectrumView(seekBegain view: SoundSpectrumView)
    func soundSpectrumView(view: SoundSpectrumView, seekTo: Double, isDraging: Bool)
//    func soundSpectrumView(seekEnd view: SoundSpectrumView)
}

class SoundSpectrumView: UIView {
    
    public var widthPerSecond: CGFloat = 30
    public var audionDuration: TimeInterval = 33
    public var cursorLeftOffset: CGFloat = 93.75
    public var cursorColor: UIColor = .white
    public var maxScrollWidth: CGFloat = 375
    public var audioURL: URL?
    
    public weak var delegate: SoundSpectrumViewDelegate?
    
    private var scrollView: UIScrollView!
    
    public var chordPlayView: ChordPlayView!
    public var effectView: SoundEffectView!
    
    /// 标记是否绘制
    private var isDrawWave: Bool = false
    private var isDrawChordPlay: Bool = false
    
    private var recordPlaySound: PlaySoundViewModel!
    
    private var subThread: DispatchQueue = DispatchQueue.init(label: "playSound")
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.initScrollView()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func initScrollView() {
        self.scrollView = UIScrollView(frame: self.bounds)
        self.addSubview(self.scrollView)
        self.scrollView.backgroundColor = .clear
        self.scrollView.showsVerticalScrollIndicator = false
        self.scrollView.showsHorizontalScrollIndicator = false
    }
    
    public func setupScrollView() {
        let edgeOffset: CGFloat = cursorLeftOffset
        self.scrollView.contentInset = UIEdgeInsets(top: 0, left: edgeOffset, bottom: 0, right: self.bounds.width-edgeOffset)
        self.scrollView.delegate = self
        self.scrollView.contentSize = CGSize(width: self.maxScrollWidth, height: self.bounds.height)
    }
    
    public func initViews() {
        self.backgroundColor = .black
        // wavefrom
        self.initWaveView()
        
        // chordPlays
        self.initChordPlayView()
        
        // effects
        self.initEffctView()
        
        // cursorView
        self.initCursorView()
    }
    
    private func initWaveView() {
        let frame = CGRect(origin: .zero, size: CGSize(width: self.maxScrollWidth, height: self.bounds.height))
        
        // wavefrom
        if let audioURL = self.audioURL {
            let wave = SoundWaveView(audioURL: audioURL, frame: frame)
            self.scrollView.addSubview(wave)
            self.scrollView.sendSubviewToBack(wave)
        }
    }
    
    private func initChordPlayView() {
        let frame = CGRect(origin: .zero, size: CGSize(width: self.maxScrollWidth, height: self.bounds.height))
        // chordPlays
        let cpv = ChordPlayView(frame: frame)
        self.scrollView.addSubview(cpv)
        self.chordPlayView = cpv
    }
    
    private func initEffctView() {
        let frame = CGRect(origin: .zero, size: CGSize(width: self.maxScrollWidth, height: self.bounds.height))
        // effects
        let sev = SoundEffectView(frame: frame)
        self.scrollView.addSubview(sev)
        self.effectView = sev
    }
    
    private func initCursorView() {
        // cursorView
        let cursor = UIView(frame: CGRect(x: self.cursorLeftOffset, y: 0, width: 2, height: self.bounds.height))
        cursor.backgroundColor = self.cursorColor
        cursor.alpha = 0.8
        self.addSubview(cursor)
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
        DispatchQueue.main.async {
            let cpro = second/self.audionDuration
            let leftOffset = CGFloat(cpro)*self.maxScrollWidth

            if leftOffset.isEqual(to: 0) {
                self.scrollView.contentOffset.x = -self.cursorLeftOffset
            }else {
                self.scrollView.setContentOffset(CGPoint(x: leftOffset-self.cursorLeftOffset, y: 0), animated: false)
            }
        }
    }
}
extension SoundSpectrumView: UIScrollViewDelegate {
    func scrollViewDidScroll(_ scrollView: UIScrollView) {
        let ratio = Double((scrollView.contentOffset.x+self.cursorLeftOffset)/scrollView.contentSize.width)
        let timeOffset = ratio * self.audionDuration
        self.delegate?.soundSpectrumView(view: self, seekTo: timeOffset, isDraging: scrollView.isDragging)
    }
}
