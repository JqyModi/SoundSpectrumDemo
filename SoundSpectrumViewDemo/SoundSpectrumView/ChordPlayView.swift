//
//  ChordPlayView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/24.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class ChordPlayView: UIView {
    
    private let lineWidth: CGFloat = 16
    private let lineHeight: CGFloat = 50
    private let lineColor: UIColor = .lightGray
    private let cpBackgroundColor: UIColor = .clear

    override init(frame: CGRect) {
        super.init(frame: frame)
        self.initViews()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func initViews() {
        self.backgroundColor = self.cpBackgroundColor
    }
    
    public func drawLines(lineXs: [CGFloat]) {
        self.removeAllMark()
        for item in lineXs {
            self.drawVerticalLine(lineFrameX: item)
        }
    }
    
    public func removeAllMark() {
        self.subviews.forEach { (sub) in
            sub.removeFromSuperview()
        }
    }
    
    private func drawVerticalLine(lineFrameX: CGFloat) {
//        let line = UIView(frame: CGRect(x: lineFrameX, y: 0, width: lineWidth, height: self.bounds.height))
//        line.backgroundColor = self.lineColor
//        self.addSubview(line)
        
        let layerView = UIView(frame: CGRect(x: lineFrameX, y: 0, width: lineWidth, height: self.bounds.height))
        // fillCode
        let bgLayer1 = CAGradientLayer()
        bgLayer1.colors = [UIColor(red: 1, green: 1, blue: 1, alpha: 0).cgColor, UIColor(red: 1, green: 1, blue: 1, alpha: 1).cgColor]
        bgLayer1.locations = [0, 1]
        bgLayer1.frame = layerView.bounds
        bgLayer1.startPoint = CGPoint(x: 0.5, y: 0.01)
        bgLayer1.endPoint = CGPoint(x: 0.5, y: 0.99)
        layerView.layer.addSublayer(bgLayer1)
        layerView.alpha = 0.4996
        self.addSubview(layerView)
        
    }
}
