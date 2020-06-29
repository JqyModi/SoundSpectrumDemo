//
//  SoundEffectView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/25.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class SoundEffectView: UIView {
    
    private let lightyellow = UIColor(red: 247/255, green: 196/255, blue: 2/255, alpha: 1)
    private let lightblue = UIColor(red: 73/255, green: 197/255, blue: 233/255, alpha: 1)
    private let lightpurple = UIColor(red: 131/255, green: 148/255, blue: 236/255, alpha: 1)
    private let lightred = UIColor(red: 255/255, green: 109/255, blue: 109/255, alpha: 1)
    
    private let darkyellow = UIColor(red: 124/255, green: 98/255, blue: 1/255, alpha: 1)
    private let darkblue = UIColor(red: 37/255, green: 99/255, blue: 117/255, alpha: 1)
    private let darkpurple = UIColor(red: 66/255, green: 74/255, blue: 118/255, alpha: 1)
    private let darkred = UIColor(red: 128/255, green: 55/255, blue: 55/255, alpha: 1)
    
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
//        self.backgroundColor = self.cpBackgroundColor
        self.backgroundColor = nil
        for index in 0..<self.lineXs.count {
            let linex = self.lineXs[index]
            let linew = self.lineWs[index]
            let lineindex = self.lineIdxs[index]
            self.drawMark(frameX: linex, frameWidth: linew, lineIndex: lineindex)
        }
    }
    
    private func drawMark(frameX: CGFloat, frameWidth: CGFloat, lineIndex: Int, animate: Bool = false) {
        guard let mark = Bundle.main.loadNibNamed(String(describing: EffectMarkItemView.classForCoder()), owner: nil, options: nil)?.last as? EffectMarkItemView else {return}
        let tOffset = (self.lineCount-1)*self.lineOffset
        let tHeight = self.lineCount*self.markHeight
        let lineTopY = (self.bounds.height - (tOffset+tHeight))/2
        let y = lineTopY+CGFloat(lineIndex)*(self.markHeight+self.lineOffset)
        let frame = CGRect(x: frameX, y: y, width: frameWidth, height: markHeight)
        mark.frame = frame
        let colors = self.lineIndexToColors(lineIndex: lineIndex)
        mark.setHeadColor(color: colors.head)
        if animate {
            mark.setTailColor(color: colors.head)
        }else {
            mark.setTailColor(color: colors.tail)
        }
        self.addSubview(mark)
        
        if animate {
            UIView.animate(withDuration: 0.25) {
                mark.setTailColor(color: colors.tail)
            }
        }
        
    }
    
    public func randomMark(frameX: CGFloat, frameWidth: CGFloat, lineIndex: Int, animate: Bool = false) {
        self.drawMark(frameX: frameX, frameWidth: frameWidth, lineIndex: lineIndex, animate: animate)
    }
    
    private func lineIndexToColors(lineIndex: Int) -> (head: UIColor, tail: UIColor) {
        var colors = (UIColor.clear, UIColor.clear)
        if lineIndex == 0 {
            colors = (self.lightyellow, self.darkyellow)
        }else if lineIndex == 1 {
            colors = (self.lightblue, self.darkblue)
        }else if lineIndex == 2 {
            colors = (self.lightpurple, self.darkpurple)
        }else if lineIndex == 3 {
            colors = (self.lightred, self.darkred)
        }
        return colors
    }
    
}
