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
    
    private var spectrumView: SoundSpectrumView?
    
    private var timer: Timer?
    
    private var isOrgPlayer: Bool = false
    private var orgPlayer: AEAudioFilePlayer!
    
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
        player.removeUponFinish = false
        player.completionBlock = {
            player.channelIsMuted = true
        }
        AEPlayerKit.shared.play(player: player)
        self.orgPlayer = player
    }
    
    private func initTimer() {
        let timer = Timer.scheduledTimer(timeInterval: 0.05, target: self, selector: #selector(self.updateProgress), userInfo: nil, repeats: true)
        self.timer = timer
        
//        if !self.isOrgPlayer {
//            self.initPlayer()
//        }else {
//            self.orgPlayer.channelIsMuted = false
//        }
    }
    
    @objc private func updateProgress() {
        progressValue += 0.15
        print("progress: \(progressValue)")
        if progressValue > 33 {
           progressValue = 0
        }
        DispatchQueue.main.async {
            self.spectrumView?.updateProgress(second: Double(self.progressValue))
        }
    }
    
    private func pauseTimer() {
        timer?.invalidate()
        timer = nil
        
//        self.orgPlayer.channelIsMuted = true
    }
    
    @IBAction func play(_ sender: UIButton) {
        if sender.isSelected {
            sender.isSelected = false
            sender.setTitle("Pause", for: .selected)
            self.pauseTimer()
        }else {
            sender.isSelected = true
            sender.setTitle("Play", for: .normal)
            self.initTimer()
        }
    }
    
    @IBAction func resset(_ sender: UIButton) {
//        AEPlayerKit.shared.pause()
        spectrumView?.clearAllMarks()
    }
}

extension ViewController: PlaySoundKeyboardViewDelegate {
    func playSoundKeyboardView(view: PlaySoundKeyboardView, itemDidSelected index: Int) {
        print("selected index = \(index)")
        
        if self.timer?.isValid ?? false {
            guard let psvm = view.model.playsoundVms[index].copy() as? PlaySoundViewModel else {return}
            psvm.userClickTimeOffset = Double(self.progressValue)
            psvm.drawAnimate = true
            guard var ems = self.spectrumView?.model.effectMarks.playSoundItems else {return}
            ems.append(psvm)
            let model = self.spectrumView?.model
            model?.playsounds = ems
            self.spectrumView?.model = model
            print("弹奏加1")
            print("model?.playsounds.count = \(model?.playsounds.count)")
        }
        
        guard let module = view.model.playsoundVms[index].module else {return}
        module.removeUponFinish = true
        AEPlayerKit.shared.play(player: module)
        
    }
}

extension ViewController: SoundSpectrumViewDelegate {
    func soundSpectrumView(view: SoundSpectrumView, seekTo: Double) {
        self.progressValue = CGFloat(seekTo)
    }
}
