//
//  RecordView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/7/6.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import UICircularProgressRing

protocol RecordViewDelegate: class {
    func recordView(view: RecordView, startTap sender: UIButton)
    func recordView(view: RecordView, restartTap sender: UIStackView)
    func recordView(view: RecordView, finishedTap sender: UIStackView)
}

class RecordView: UIView {
    
    public weak var delegate: RecordViewDelegate?
    
    private let spacingOffset: CGFloat = 15.ratioHeight
    private let verticalBtnWidth: CGFloat = 30.ratioWidth
    
    private var progressBarWidth: CGFloat = 78.ratioWidth
    private var progressBarHeight: CGFloat = 78.ratioWidth
    
    private var timerBar: UICircularProgressRing!
    private var startBtn: UIButton!
    private var restartStack: UIStackView!
    private var finishedStack: UIStackView!
    
    private var maxValue: CGFloat = 100
    private var startAngle: CGFloat = 270
    private var circleRingColor: UIColor = UIColor(red: 142/255, green: 50/255, blue: 66/255, alpha: 1)
    
    init(frame: CGRect, maxValue: CGFloat = 100) {
        super.init(frame: frame)
        self.maxValue = maxValue
        self.initParams()
        self.initViews()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func initParams() {
        self.progressBarHeight = self.bounds.height
        self.progressBarWidth = self.progressBarHeight
    }
    
    private func initViews() {
        self.backgroundColor = .clear
        self.initVerticalBtns()
        self.initProgressbar()
        self.initStartBtn()
        
        self.initTaps()
    }
    
    private func initVerticalBtns() {
        let ringX = (self.bounds.width-progressBarWidth)/2
        
        let imageView1 = UIImageView(image: #imageLiteral(resourceName: "icon_again"))
        let label1 = UILabel()
        label1.text = "重录"
        label1.font = UIFont.systemFont(ofSize: 12, weight: .medium)
        label1.textColor = .white
        label1.textAlignment = .center
        let stack1 = UIStackView(arrangedSubviews: [imageView1, label1])
        stack1.axis = .vertical
        stack1.distribution = .fillEqually
        let width: CGFloat = self.verticalBtnWidth
        let height: CGFloat = self.bounds.height-self.spacingOffset*2
        let x1 = ringX/2 - width/2
        let y1 = self.spacingOffset
        let st1Frame = CGRect(x: x1, y: y1, width: width, height: height)
        stack1.frame = st1Frame
        self.addSubview(stack1)
        self.restartStack = stack1
        
        let imageView2 = UIImageView(image: #imageLiteral(resourceName: "icon_again"))
        let label2 = UILabel()
        label2.text = "完成"
        label2.font = UIFont.systemFont(ofSize: 12, weight: .medium)
        label2.textColor = .white
        label2.textAlignment = .center
        let stack2 = UIStackView(arrangedSubviews: [imageView2, label2])
        stack2.axis = .vertical
        stack2.distribution = .fillEqually
        let x2 = self.bounds.width/2 + (self.bounds.width/2-progressBarWidth/2)/2-width/2+progressBarWidth/2
        let y2 = self.spacingOffset
        let st2Frame = CGRect(x: x2, y: y2, width: width, height: height)
        stack2.frame = st2Frame
        self.addSubview(stack2)
        self.finishedStack = stack2
    }
    
    private func initProgressbar() {
        // Create the view
        let progressRing = UICircularProgressRing()
        // Change any of the properties you'd like
        progressRing.maxValue = self.maxValue
        progressRing.style = .bordered(width: 0, color: .clear)
        // etc ...
        progressRing.innerRingColor = .darkGray
        progressRing.innerRingWidth = 3
        progressRing.innerRingSpacing = 0
        progressRing.outerRingColor = self.circleRingColor
        progressRing.outerRingWidth = 3
        progressRing.fontColor = .clear
        progressRing.startAngle = self.startAngle
        
        let x = (self.bounds.width-progressBarWidth)/2
        let y = (self.bounds.height-progressBarHeight)/2
        let frame = CGRect(x: x, y: y, width: progressBarWidth, height: progressBarHeight)
        progressRing.frame = frame
        self.addSubview(progressRing)
        self.timerBar = progressRing
    }
    
    private func initStartBtn() {
        let x = (self.bounds.width-(progressBarWidth-16))/2
        let y = (self.bounds.height-(progressBarHeight-16))/2
        let btnFrame = CGRect(x: x, y: y, width: progressBarWidth-16, height: progressBarHeight-16)
        let btn = UIButton(frame: btnFrame)
        btn.titleLabel?.font = UIFont.systemFont(ofSize: 15, weight: .black)
        self.addSubview(btn)
        self.startBtn = btn
        self.startBtn.addTarget(self, action: #selector(self.startTouch(sender:)), for: .touchUpInside)
        // 初始状态
        self.start()
    }
    
    private func initTaps() {
        let tap1 = UITapGestureRecognizer(target: self, action: #selector(self.restartTouch(sender:)))
        self.restartStack.addGestureRecognizer(tap1)
        
        let tap2 = UITapGestureRecognizer(target: self, action: #selector(self.finishedTouch(sender:)))
        self.finishedStack.addGestureRecognizer(tap2)
    }
    
    @objc
    private func finishedTouch(sender: UIStackView) {
        delegate?.recordView(view: self, finishedTap: sender)
    }
    
    @objc
    private func restartTouch(sender: UIStackView) {
        delegate?.recordView(view: self, restartTap: sender)
    }
    
    @objc
    private func startTouch(sender: UIButton) {
        if !sender.isSelected {
            self.playing()
        }else {
            self.pause()
        }
        sender.isSelected = !sender.isSelected
        delegate?.recordView(view: self, startTap: sender)
    }
    
    private func start() {
        self.startBtn.setTitle("Start")
        self.startBtn.setBackgroundImage(#imageLiteral(resourceName: "btn_video_start"))
    }
    
    public func playReset() {
        if self.startBtn.isSelected {
            self.start()
            self.startBtn.isSelected = false
        }
    }
    
    public func playPause() {
        if self.startBtn.isSelected {
            self.pause()
            self.startBtn.isSelected = false
        }
    }
    
    private func pause() {
        self.startBtn.setTitle("Continue")
        self.startBtn.setBackgroundImage(#imageLiteral(resourceName: "btn_video_start"))
    }
    
    private func playing() {
        self.startBtn.setTitle("Pause")
        self.startBtn.setBackgroundImage(#imageLiteral(resourceName: "btn_video_start"))
    }
    
    public func updateProgress(progress: CGFloat) {
        if progress < 1 {
            self.timerBar.startProgress(to: 0, duration: 0)
        }else {
            self.timerBar.startProgress(to: progress, duration: 0)
        }
    }
    
    public func resetView() {
        self.start()
        self.timerBar.startProgress(to: 0, duration: 0)
    }
}
