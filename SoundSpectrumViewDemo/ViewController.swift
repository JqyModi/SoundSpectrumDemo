//
//  ViewController.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/19.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import TheAmazingAudioEngine

public let SCREEN_WIDTH: CGFloat = UIScreen.main.bounds.width
public let SCREEN_HEIGHT: CGFloat = UIScreen.main.bounds.height

extension CGFloat {
    var ratioWidth: CGFloat {
        return SCREEN_WIDTH * self/375.0
    }
    
    var ratioHeight: CGFloat {
        return SCREEN_HEIGHT * self/677.0
    }
}

extension Int {
    var ratioWidth: CGFloat {
        return SCREEN_WIDTH * CGFloat(self)/375.0
    }
    
    var ratioHeight: CGFloat {
        return SCREEN_HEIGHT * CGFloat(self)/677.0
    }
}

class ViewController: UIViewController {
    
    private let soundSpectrumViewHeight: CGFloat = 120.ratioHeight
    private var navHeight: CGFloat = 64
    
    private let segmentHeight: CGFloat = 32.ratioHeight
    private let segmentControlHeight: CGFloat = 28.ratioHeight
    
    private let sectionLeftOffset: CGFloat = 15
    private let sectionTopOffset: CGFloat = 15
    private var itemWidth: CGFloat = 82.5
    private var itemHeight: CGFloat = 82.5
    private let itemOffset: CGFloat = 5
    
    private let totalRow: Int = 3
    private let totalColumn: Int = 4
    
    private var keyboardViewHeight: CGFloat = 400
    
    private let recordViewHeight: CGFloat = 78.ratioHeight
    
    private var spectrumView: SoundSpectrumView?
    private var keyboardView: PlaySoundKeyboardView?
    private var recordView: RecordView?
    
    private var timer: Timer?
    
    private var spectViewModel: SoundSpectrumViewModel!
    private var keyboardViewModel: PlaySoundKeyboardViewModel!
    
    private var isOrgPlayer: Bool = false
    private var orgPlayer: AEAudioFilePlayer!
    
    private var orgDuration: CGFloat = 0
    private var maxValue: CGFloat = 0
    
    private var progressValue: CGFloat = 0 {
        didSet {
            DispatchQueue.main.async {
                self.updateTimerBar()
            }
        }
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        self.initParams()
        self.initViews()
        self.initDatas()
    }
    
    private func updateTimerBar() {
        self.recordView?.updateProgress(progress: self.progressValue)
    }
    
    private func initParams() {
        let topBarHeight = UIApplication.shared.statusBarFrame.size.height +
        (self.navigationController?.navigationBar.frame.height ?? 0.0)
        self.navHeight = topBarHeight
        
        let tOffset = (self.sectionLeftOffset*2+self.itemOffset*CGFloat(self.totalColumn-1))
        let itemWidth = (self.view.bounds.width-tOffset)/CGFloat(self.totalColumn)
        self.itemWidth = itemWidth
        self.itemHeight = itemWidth
        
        let tVOffset = self.sectionTopOffset*2+CGFloat(self.totalRow-1)*self.itemOffset
        
        let tSegmentHeight = self.segmentHeight + self.segmentControlHeight
        self.keyboardViewHeight = itemHeight*CGFloat(self.totalRow)+tVOffset+tSegmentHeight
        
        // 初始化录制按钮Duration
        let url = Bundle.main.url(forResource: "rain_love.mp3", withExtension: nil)!
        let module = try! AEAudioFilePlayer(url: url)
        self.maxValue = CGFloat(module.regionDuration)
    }

    private func initViews() {
        self.view.backgroundColor = UIColor(red: 0.06, green: 0.05, blue: 0.1, alpha: 1)
        
        self.initSoundSpectrumView()
        
        self.initPlaySoundKeyboardView()
        
        self.initRecordView()
    }
    
    private func initSoundSpectrumView() {
        let sdFrame = CGRect(x: 0, y: self.navHeight, width: self.view.bounds.width, height: self.soundSpectrumViewHeight)
        let soundwave = SoundSpectrumView(frame: sdFrame)
        self.view.addSubview(soundwave)
        self.spectrumView = soundwave
        soundwave.delegate = self
    }
    
    private func initPlaySoundKeyboardView() {
        let kbFrame = CGRect(x: 0, y: self.navHeight+self.soundSpectrumViewHeight, width: self.view.bounds.width, height: self.keyboardViewHeight)
        let keyboardView = PlaySoundKeyboardView(frame: kbFrame)
        self.view.addSubview(keyboardView)
        self.keyboardView = keyboardView
        keyboardView.delegate = self
    }
    
    private func initRecordView() {
        let frame = CGRect(x: 0, y: self.navHeight+self.soundSpectrumViewHeight+self.keyboardViewHeight+20, width: view.bounds.width, height: self.recordViewHeight)
        
        let recordView = RecordView(frame: frame, maxValue: self.maxValue)
        self.view.addSubview(recordView)
        
        self.recordView = recordView
        self.recordView?.delegate = self
    }
    
    private func initDatas() {
        let url = Bundle.main.url(forResource: "rain_love.mp3", withExtension: nil)!
        let ssvm = SoundSpectrumViewModel(audioURL: url)
        ssvm.configView(view: self.spectrumView!)
        self.spectViewModel = ssvm
        
        let kbvm = PlaySoundKeyboardViewModel()
        kbvm.configView(view: self.keyboardView!)
        self.keyboardViewModel = kbvm
    }
    
    private func initPlayer() {
        guard let player = self.spectViewModel.module else {return}
        self.orgDuration = CGFloat(player.regionDuration)
        player.removeUponFinish = false
        player.completionBlock = {
            self.resetOrgPlayer()
        }
        AEPlayerKit.shared.play(player: player)
        self.orgPlayer = player
    }
    
    private func initTimer() {
        DispatchQueue.global().async {
            if self.timer == nil {
                let timer = Timer.scheduledTimer(timeInterval: 0.01, target: self, selector: #selector(self.updateProgress), userInfo: nil, repeats: true)
                self.timer = timer
            }
            
            if !self.isOrgPlayer {
                self.isOrgPlayer = true
                self.initPlayer()
            }else {
                self.orgPlayer.currentTime = TimeInterval(self.progressValue)
                self.orgPlayer.channelIsPlaying = true
            }
            // 开启定时器
            RunLoop.current.run()
        }
    }
    
    @objc private func updateProgress() {
        progressValue = CGFloat(self.orgPlayer.currentTime)
        print("progress: \(progressValue)")
        if progressValue == 0 {
            self.initTimer()
        }
        self.spectrumView?.updateProgress(second: Double(self.progressValue))
        // 播放命中音效
        self.spectViewModel.playEffects(second: Double(self.progressValue))
    }
    
    private func pauseTimer() {
        timer?.invalidate()
        timer = nil
        
        self.orgPlayer?.channelIsPlaying = false
    }
    
    private func stopTimer() {
        timer?.invalidate()
        timer = nil
        self.resetOrgPlayer()
        self.resetPlayBtn()
    }
    
    private func resetOrgPlayer() {
        self.orgPlayer?.currentTime = 0
        self.orgPlayer?.channelIsPlaying = false
    }
    
    private func resetPlayBtn() {
        self.recordView?.playReset()
    }
    
    private func resetView() {
        self.stopTimer()
        self.progressValue = 0
        self.spectrumView?.updateProgress(second: Double(self.progressValue))
        self.spectrumView?.clearAllMarks()
        // 清空模型数据
        self.spectViewModel.resetEffectMarks()
        self.spectViewModel.redrawEffectMarks(view: self.spectrumView!)
        self.recordView?.resetView()
    }
}

extension ViewController: PlaySoundKeyboardViewDelegate {
    func playSoundKeyboardView(view: PlaySoundKeyboardView, itemDidSelected index: Int) {
        DispatchQueue.global().async {
            if self.timer?.isValid ?? false {
                guard let psvm = view.model.playsoundVms[index].copy() as? PlaySoundViewModel else {return}
                psvm.userClickTimeOffset = Double(self.progressValue)
                print("userClickTimeOffset = \(psvm.userClickTimeOffset)")
                psvm.drawAnimate = true
                self.spectViewModel.addEffectMark(psvm: psvm)
                if let spectView = self.spectrumView {
                    self.spectViewModel.redrawEffectMarks(view: spectView)
                }
            }
            guard let module = view.model.playsoundVms[index].module else {return}
            module.removeUponFinish = true
            AEPlayerKit.shared.play(player: module)
        }
    }
}

extension ViewController: SoundSpectrumViewDelegate {
    func soundSpectrumView(view: SoundSpectrumView, seekTo: Double, isDraging: Bool) {
        if isDraging {
            self.pauseTimer()
            if !(self.timer?.isValid ?? false) {
                self.recordView?.playPause()
            }
        }
        if !(self.timer?.isValid ?? false) {
            self.progressValue = CGFloat(seekTo)
        }
    }
}
extension ViewController: RecordViewDelegate {
    func recordView(view: RecordView, startTap sender: UIButton) {
        if sender.isSelected {
            self.initTimer()
        }else {
            self.pauseTimer()
        }
    }
    
    func recordView(view: RecordView, restartTap sender: UIStackView) {
        self.resetView()
    }
    
    func recordView(view: RecordView, finishedTap sender: UIStackView) {
        print("finished")
    }
}
