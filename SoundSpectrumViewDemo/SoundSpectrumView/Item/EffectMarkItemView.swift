//
//  EffectMarkItemView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/25.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

class EffectMarkItemView: UIView {
    
    private let lightyellow = UIColor(red: 247/255, green: 196/255, blue: 2/255, alpha: 1)
    private let lightblue = UIColor(red: 73/255, green: 197/255, blue: 233/255, alpha: 1)
    private let lightpurple = UIColor(red: 131/255, green: 148/255, blue: 236/255, alpha: 1)
    private let lightred = UIColor(red: 255/255, green: 109/255, blue: 109/255, alpha: 1)
    
    private let darkyellow = UIColor(red: 124/255, green: 98/255, blue: 1/255, alpha: 1)
    private let darkblue = UIColor(red: 37/255, green: 99/255, blue: 117/255, alpha: 1)
    private let darkpurple = UIColor(red: 66/255, green: 74/255, blue: 118/255, alpha: 1)
    private let darkred = UIColor(red: 128/255, green: 55/255, blue: 55/255, alpha: 1)

    private var markHeadColors = [UIColor]()

    private var markTailColors = [UIColor]()

    @IBOutlet weak var tail: UIView!
    @IBOutlet weak var head: UIView!
    
    public var lineIndex: Int = 0
    
    override func awakeFromNib() {
        super.awakeFromNib()
        
        self.initParams()
    }
    
    private func initParams() {
        self.markHeadColors = [lightyellow,
                               lightblue,
                               lightpurple,
                               lightred]
        self.markTailColors = [darkyellow,
                               darkblue,
                               darkpurple,
                               darkred]
        
        self.backgroundColor = .clear
        
        head.layer.cornerRadius = 3
        head.layer.masksToBounds = true
        tail.layer.cornerRadius = 3
        tail.layer.masksToBounds = true
    }
    
    public func setupColor(lineIndex: Int) {
        if lineIndex >= self.markHeadColors.count {
            return
        }
        let hc = self.markHeadColors[lineIndex]
        let tc = self.markTailColors[lineIndex]
        self.head.backgroundColor = hc
        self.tail.backgroundColor = tc
    }

}
