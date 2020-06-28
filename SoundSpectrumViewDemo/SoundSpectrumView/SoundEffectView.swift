//
//  SoundEffectView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/25.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class SoundEffectView: UIView {
    
    private let lineCount: CGFloat = 4
    private let lineOffset: CGFloat = 8
    private let markHeight: CGFloat = 8
    private let cpBackgroundColor: UIColor = UIColor(white: 0, alpha: 0.05)
    
    private var lineXs: [CGFloat] = []
    private var lineWs: [CGFloat] = []
    private var lineIdxs: [Int] = []
    
    init(frame: CGRect, lineXs: [CGFloat], lineWs: [CGFloat], lineIdxs: [Int]) {
        super.init(frame: frame)
        self.lineXs = lineXs
        self.lineWs = lineWs
        self.lineIdxs = lineIdxs
        self.initViews()
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func initViews() {
        self.backgroundColor = self.cpBackgroundColor
        for index in 0..<self.lineXs.count {
            let linex = self.lineXs[index]
            let linew = self.lineWs[index]
            let lineindex = self.lineIdxs[index]
            self.drawMark(frameX: linex, frameWidth: linew, lineIndex: lineindex)
        }
    }
    
    private func drawMark(frameX: CGFloat, frameWidth: CGFloat, lineIndex: Int) {
        guard let mark = Bundle.main.loadNibNamed(String(describing: EffectMarkItemView.classForCoder()), owner: nil, options: nil)?.last as? EffectMarkItemView else {return}
        let tOffset = (self.lineCount-1)*self.lineOffset
        let tHeight = self.lineCount*self.markHeight
        let lineTopY = (self.bounds.height - (tOffset+tHeight))/2
        let y = lineTopY+CGFloat(lineIndex)*(self.markHeight+self.lineOffset)
        let frame = CGRect(x: frameX, y: y, width: frameWidth, height: markHeight)
        mark.frame = frame
        mark.setupColor(lineIndex: lineIndex)
        self.addSubview(mark)
    }
    
}
