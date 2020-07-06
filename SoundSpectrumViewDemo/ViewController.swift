//
//  ViewController.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/19.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import TheAmazingAudioEngine

class ViewController: UIViewController {
    
    @IBOutlet weak var timeLabel: UILabel!
    @IBOutlet weak var playBtn: UIButton!
    
    private var spectrumView: SoundSpectrumView?
    
    private var timer: Timer?
    
    private var isOrgPlayer: Bool = false
    private var orgPlayer: AEAudioFilePlayer!
    
    private var orgDuration: CGFloat = 0
    
    private var progressValue: CGFloat = 0 {
        didSet {
            DispatchQueue.main.async {
                self.timeLabel.text = "\(Int(self.progressValue))"
            }
        }
    }

    override func viewDidLoad() {
        super.viewDidLoad()
        self.initViews()
    }

    private func initViews() {
        self.view.backgroundColor = .white
        let soundwave = Bundle.main.loadNibNamed(String(describing: SoundSpectrumView.classForCoder()), owner: nil, options: nil)?.last as! SoundSpectrumView
        soundwave.frame = CGRect(x: 0, y: 100, width: self.view.bounds.width, height: 100)
        self.view.addSubview(soundwave)
        self.spectrumView = soundwave
        
        let ssvm = SoundSpectrumViewModel()
        ssvm.configView(view: soundwave)
        
        soundwave.delegate = self
        
        let kbFrame = CGRect(x: 0, y: 200, width: self.view.bounds.width, height: 400)
        let keyboardView = PlaySoundKeyboardView(frame: kbFrame)
        self.view.addSubview(keyboardView)
        let kbvm = PlaySoundKeyboardViewModel()
        kbvm.configView(view: keyboardView)
        
        keyboardView.delegate = self
    }
    
    private func initPlayer() {
        guard let player = self.spectrumView?.model.module else {return}
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
                let timer = Timer.scheduledTimer(timeInterval: 0.05, target: self, selector: #selector(self.updateProgress), userInfo: nil, repeats: true)
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
//            progressValue = 0
            self.initTimer()
        }
        DispatchQueue.main.async {
            self.spectrumView?.updateProgress(second: Double(self.progressValue))
        }
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
    
    @IBAction func play(_ sender: UIButton) {
        if sender.isSelected {
            sender.isSelected = false
            sender.setTitle("Play", for: .normal)
            self.pauseTimer()
        }else {
            sender.isSelected = true
            sender.setTitle("Pause", for: .selected)
            self.initTimer()
        }
    }
    
    private func resetPlayBtn() {
        self.playBtn.isSelected = false
        self.playBtn.setTitle("Play", for: .normal)
    }
    
    @IBAction func resset(_ sender: UIButton) {
//        AEPlayerKit.shared.pause()
        spectrumView?.clearAllMarks()
    }
}

extension ViewController: PlaySoundKeyboardViewDelegate {
    func playSoundKeyboardView(view: PlaySoundKeyboardView, itemDidSelected index: Int) {
        
        if self.timer?.isValid ?? false {
            guard let psvm = view.model.playsoundVms[index].copy() as? PlaySoundViewModel else {return}
            psvm.userClickTimeOffset = Double(self.progressValue)
            print("userClickTimeOffset = \(psvm.userClickTimeOffset)")
            psvm.drawAnimate = true
            guard var ems = self.spectrumView?.model.effectMarks.playSoundItems else {return}
            ems.append(psvm)
            let model = self.spectrumView?.model
            model?.playsounds = ems
            self.spectrumView?.model = model
        }
        
        guard let module = view.model.playsoundVms[index].module else {return}
        module.removeUponFinish = true
        AEPlayerKit.shared.play(player: module)
        
    }
}

extension ViewController: SoundSpectrumViewDelegate {
    func soundSpectrumView(view: SoundSpectrumView, seekTo: Double, isDraging: Bool) {
        if isDraging {
            self.stopTimer()
        }
        if !(self.timer?.isValid ?? false) {
            self.progressValue = CGFloat(seekTo)
        }
    }
}
