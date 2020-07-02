//
//  KeyboardItemBgView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/7/2.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit

@IBDesignable class RadialGradientView: UIView {
    // 1 0.537255 0.537255 1
    @IBInspectable var insideColor: UIColor = UIColor(red: 1, green: 0.53, blue: 0.53, alpha: 1)
    // 1 0.32549 0.32549 1
    @IBInspectable var outsideColor: UIColor = UIColor(red: 1, green: 0.32, blue: 0.32, alpha: 1)

    override func draw(_ rect: CGRect) {
        let colors = [insideColor.cgColor, outsideColor.cgColor] as CFArray
        let endRadius = sqrt(pow(frame.width/2, 2) + pow(frame.height/2, 2))
        let center = CGPoint(x: bounds.size.width / 2, y: bounds.size.height / 2)
        let gradient = CGGradient(colorsSpace: nil, colors: colors, locations: nil)
        let context = UIGraphicsGetCurrentContext()

        context?.drawRadialGradient(gradient!, startCenter: center, startRadius: 0.0, endCenter: center, endRadius: endRadius, options: CGGradientDrawingOptions.drawsBeforeStartLocation)
    }
}
