//
//  ViewController.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/19.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    @IBOutlet weak var timeLabel: UILabel!
    
    private var spectrumView: SoundSpectrumView?
    
    private var timer: Timer?
    private var progressValue: CGFloat = 0 {
        didSet {
            timeLabel.text = "\(Int(progressValue))"
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
    
    private func initTimer() {
        let timer = Timer(timeInterval: 0.05, target: self, selector: #selector(updateProgress), userInfo: nil, repeats: true)
        RunLoop.main.add(timer, forMode: .default)
        self.timer = timer
    }
    
    @objc private func updateProgress() {
        progressValue += 0.15
        print("progress: \(progressValue)")
        if progressValue > 33 {
           progressValue = 0
        }
        
        self.spectrumView?.updateProgress(second: Double(progressValue))
    }
    
    private func pauseTimer() {
        timer?.invalidate()
        timer = nil
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
        spectrumView?.clearAllMarks()
    }
}

extension ViewController: PlaySoundKeyboardViewDelegate {
    func playSoundKeyboardView(view: PlaySoundKeyboardView, itemDidSelected index: Int) {
        print("selected index = \(index)")
        
        if self.timer?.isValid ?? false {
            let psvm = view.model.playsoundVms[index]
            psvm.userClickTimeOffset = Double(self.progressValue)
            guard var ems = self.spectrumView?.model.effectMarks.playSoundItems else {return}
            ems.append(psvm)
            let model = self.spectrumView?.model
            model?.playsounds = ems
            self.spectrumView?.model = model
        }else {
            guard let module = view.model.playsoundVms[index].module else {return}
            AEPlayerKit.shared.play(player: module)
        }
        
    }
}

extension ViewController: SoundSpectrumViewDelegate {
    func soundSpectrumView(view: SoundSpectrumView, seekTo: Double) {
        self.progressValue = CGFloat(seekTo)
    }
}
