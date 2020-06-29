//
//  ChordPlayView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/24.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class ChordPlayView: UIView {
    
    private let lineWidth: CGFloat = 2
    private let lineHeight: CGFloat = 50
    private let lineColor: UIColor = .lightGray
    private let cpBackgroundColor: UIColor = UIColor(white: 0, alpha: 0.05)
    
    private var lineXs: [CGFloat] = []

    init(frame: CGRect, lineXs: [CGFloat]) {
        super.init(frame: frame)
        self.lineXs = lineXs
        self.initViews()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func initViews() {
//        self.backgroundColor = self.cpBackgroundColor
        self.backgroundColor = nil
        for item in self.lineXs {
            self.drawVerticalLine(lineFrameX: item)
        }
    }
    
    private func drawVerticalLine(lineFrameX: CGFloat) {
        let line = UIView(frame: CGRect(x: lineFrameX, y: 0, width: lineWidth, height: self.bounds.height))
        line.backgroundColor = self.lineColor
        self.addSubview(line)
    }
    
}
