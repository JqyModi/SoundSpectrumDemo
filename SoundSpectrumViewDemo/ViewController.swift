//
//  ViewController.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/19.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class ViewController: UIViewController {
    
    private var spectrumView: SoundSpectrumView?
    
    private var timer: Timer?
    private var progressValue: CGFloat = 0

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
        
        let kbFrame = CGRect(x: 0, y: 200, width: self.view.bounds.width, height: 500)
        let titles = ["场景", "情节", "国风", "嘻哈"]
        let keyboardView = PlaySoundKeyboardView(frame: kbFrame, titles: titles)
        self.view.addSubview(keyboardView)
        
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

