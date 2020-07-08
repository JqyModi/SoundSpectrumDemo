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
    
    public func drawMark(markViewModel: EffectMarkItemViewModel) {
        DispatchQueue.main.async {
            guard let mark = EffectMarkItemViewModel.createMarkView() else {return}
            mark.frame = markViewModel.markFrame()
    //        markViewModel.configView(view: mark)
            let colors = self.lineIndexToColors(lineIndex: markViewModel.indexLevel)
            if markViewModel.drawAnimate {
                mark.setHeadColor(color: colors.head)
                mark.setTailColor(color: colors.head)
                UIView.animate(withDuration: 0.25) {
                    mark.setupColor(lineIndex: markViewModel.indexLevel)
                }
            }else {
                mark.setupColor(lineIndex: markViewModel.indexLevel)
            }
        
            self.addSubview(mark)
        }
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
    
    public func removeAllMark() {
        DispatchQueue.main.async {
            self.subviews.forEach { (sub) in
                sub.removeFromSuperview()
            }
        }
    }
    
}
