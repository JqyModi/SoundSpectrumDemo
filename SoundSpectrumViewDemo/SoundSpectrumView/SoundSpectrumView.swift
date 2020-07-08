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
    
    private var widthPerSecond: CGFloat = 30
    private var audionDuration: TimeInterval = 33
    private var cursorLeftOffset: CGFloat = 93.75
    private var cursorColor: UIColor = .white
    private var maxScrollWidth: CGFloat = 375
    private var audioURL: URL?
    
    public weak var delegate: SoundSpectrumViewDelegate?
    
    private var scrollView: UIScrollView!
    
    private var chordPlayView: ChordPlayView!
    private var effectView: SoundEffectView!
    
    /// 标记是否绘制
    private var isDrawWave: Bool = false
    private var isDrawChordPlay: Bool = false
    
    private var recordPlaySound: PlaySoundViewModel!
    
    public var model: SoundSpectrumViewModel! {
        didSet {
            guard model != nil else {return}
            self.configView(model: model)
            self.reloadData()
        }
    }
    
    override init(frame: CGRect) {
        super.init(frame: frame)
        self.initScrollView()
        self.setupScrollView()
        self.initViews()
        self.initDatas()
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
    
    private func setupScrollView() {
        let edgeOffset: CGFloat = cursorLeftOffset
        self.scrollView.contentInset = UIEdgeInsets(top: 0, left: edgeOffset, bottom: 0, right: self.bounds.width-edgeOffset)
        self.scrollView.delegate = self
    }
    
    private func initViews() {
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
    
    private func initDatas() {
        guard model != nil else {return}
        self.chordPlayView.drawLines(lineXs: model.playChordFrameXs)
        self.effectView?.model = model.effectMarks
    }
    
    public func configView(model: SoundSpectrumViewModel) {
        self.widthPerSecond = model.widthPerSecond
        self.audionDuration = model.duration
        self.audioURL = model.audioURL
        self.cursorColor = model.cursorColor
        self.cursorLeftOffset = model.cursorLeftOffset
        self.maxScrollWidth = model.maxScrollWidth
    }
    
    public func reloadData() {
        self.updateScrollContentSize()
//        self.clearAllMarks()
        self.reloadWave()
        self.reloadChordPlay()
        self.reloadEffect()
    }
    
    private func updateScrollContentSize() {
        DispatchQueue.main.async {
            self.scrollView.contentSize = CGSize(width: self.maxScrollWidth, height: self.bounds.height)
        }
//        self.updateSubViewsHeight()
    }
    
    private func updateSubViewsHeight() {
        self.chordPlayView?.bounds = CGRect(x: 0, y: 0, width: self.maxScrollWidth, height: self.bounds.height)
        self.effectView?.bounds = CGRect(x: 0, y: 0, width: self.maxScrollWidth, height: self.bounds.height)
    }
    
    private func reloadWave() {
        if !self.isDrawWave {
            self.isDrawWave = true
            self.initWaveView()
        }
    }
    
    private func reloadChordPlay() {
        if !self.isDrawChordPlay {
            self.isDrawChordPlay = true
            self.chordPlayView.removeAllMark()
            self.chordPlayView.drawLines(lineXs: model.playChordFrameXs)
        }
    }
    
    private func reloadEffect() {
        self.effectView?.removeAllMark()
        self.effectView?.model = model.effectMarks
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
//            item.subviews.forEach { (subView) in
//                subView.removeFromSuperview()
//            }
            model.playsounds = []
        }
    }
    
    public func updateProgress(second: Double) {
        let cpro = second/self.audionDuration
        let leftOffset = CGFloat(cpro)*self.maxScrollWidth

        if leftOffset.isEqual(to: 0) {
            DispatchQueue.main.async {
                self.scrollView.contentOffset.x = -self.cursorLeftOffset
            }
        }else {
//            DispatchQueue.main.async {
//                UIView.animate(withDuration: 1, delay: 0, options: UIView.AnimationOptions.curveLinear, animations: {
//                    self.scrollView.contentOffset.x = leftOffset-self.cursorLeftOffset
//                }, completion: nil)
//            }
//            self.scrollView.contentOffset.x = leftOffset-self.cursorLeftOffset
            DispatchQueue.main.async {
                self.scrollView.setContentOffset(CGPoint(x: leftOffset-self.cursorLeftOffset, y: 0), animated: false)
            }
        }
        
        // 随机弹奏
        self.playEffects(second: second)
    }
    
    public func playEffects(second: Double) {
        self.recordPlaySound = nil
        let rangeOffset: Double = 0.01
        let range = (second-rangeOffset...second+rangeOffset)
        model.effectMarks.markViewModels.forEach { (markItem) in
            if range.contains(markItem.timeOffset) {
                
                if self.recordPlaySound != nil, self.recordPlaySound.titleText.elementsEqual(markItem.playSoundVM.titleText) {
                    print("相同对象只用一次")
                    return
                }
                
                DispatchQueue.global().async {
                    guard let player = markItem.playSoundVM.module else {return}
                    player.removeUponFinish = true
                    AEPlayerKit.shared.play(player: player)
                }
                
                self.recordPlaySound = markItem.playSoundVM
                
                return
            }
        }
    }
}
extension SoundSpectrumView: UIScrollViewDelegate {
    func scrollViewDidScroll(_ scrollView: UIScrollView) {
        let ratio = Double((scrollView.contentOffset.x+self.cursorLeftOffset)/scrollView.contentSize.width)
        print("ratio = \(ratio)")
        let timeOffset = ratio * self.audionDuration
        self.delegate?.soundSpectrumView(view: self, seekTo: timeOffset, isDraging: scrollView.isDragging)
    }
}
