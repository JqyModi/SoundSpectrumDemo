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
    func soundSpectrumView(view: SoundSpectrumView, seekTo: Double)
//    func soundSpectrumView(seekEnd view: SoundSpectrumView)
}

class SoundSpectrumView: UIView {
    
    private var widthPerSecond: CGFloat = 50
    private var audionDuration: TimeInterval = 33
    private var cursorLeftOffset: CGFloat = 93.75
    private var cursorColor: UIColor = .red
    private var maxScrollWidth: CGFloat = 375
    private var audioURL: URL?
    
    public weak var delegate: SoundSpectrumViewDelegate?
    
    @IBOutlet weak var scrollView: UIScrollView!
    
    private var chordPlayView: ChordPlayView!
    private var effectView: SoundEffectView!
    
    /// 标记是否绘制
    private var isDrawWave: Bool = false
    private var isDrawChordPlay: Bool = false
    
    public var model: SoundSpectrumViewModel! {
        didSet {
            guard model != nil else {return}
            self.configView(model: model)
            self.reloadData()
        }
    }
    
    override func awakeFromNib() {
        super.awakeFromNib()
        self.initScrollView()
        self.setupScrollView()
        self.initViews()
        self.initDatas()
    }
    
    private func initScrollView() {
        self.scrollView.backgroundColor = .clear
        self.scrollView.showsVerticalScrollIndicator = false
        self.scrollView.showsHorizontalScrollIndicator = false
    }
    
    private func setupScrollView() {
        let edgeOffset: CGFloat = cursorLeftOffset
        self.scrollView.contentInset = UIEdgeInsets(top: 0, left: edgeOffset, bottom: 0, right: UIScreen.main.bounds.width-edgeOffset)
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
        let cursor = UIView(frame: CGRect(x: self.cursorLeftOffset, y: 0, width: 1, height: self.bounds.height))
        cursor.backgroundColor = self.cursorColor
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
        self.scrollView.contentSize = CGSize(width: self.maxScrollWidth, height: self.bounds.height)
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
            self.scrollView.contentOffset.x = 0
        }else {
            DispatchQueue.main.async {
                UIView.animate(withDuration: 1, delay: 0, options: UIView.AnimationOptions.curveLinear, animations: {
                        self.scrollView.contentOffset.x = leftOffset
                }, completion: nil)
            }
        }
        
        // 随机弹奏
        self.playEffects(second: second)
    }
    
    public func playEffects(second: Double) {
        let rangeOffset: Double = 0.2
        let range = (second-rangeOffset...second+rangeOffset)
        model.effectMarks.markViewModels.forEach { (markItem) in
            if range.contains(markItem.timeOffset) {
                guard let player = markItem.playSoundVM.module else {return}
                AEPlayerKit.shared.play(player: player)
            }
        }
    }
}
extension SoundSpectrumView: UIScrollViewDelegate {
    func scrollViewDidScroll(_ scrollView: UIScrollView) {
        let timeOffset = Double(scrollView.contentOffset.x/scrollView.contentSize.width) * self.audionDuration
        self.delegate?.soundSpectrumView(view: self, seekTo: timeOffset)
    }
}
