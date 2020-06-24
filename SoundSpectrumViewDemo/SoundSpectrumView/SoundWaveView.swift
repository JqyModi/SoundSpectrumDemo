//
//  SoundWaveView.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/6/19.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import DSWaveformImage

class SoundWaveView: UIImageView {
    
    init(audioURL: URL, frame: CGRect) {
        super.init(frame: frame)
        self.initWavefrom(audioURL: audioURL)
    }
    
    required init?(coder: NSCoder) {
        fatalError("init(coder:) has not been implemented")
    }
    
    private func initWavefrom(audioURL: URL) {
        let waveformImageDrawer = WaveformImageDrawer()

        // always uses background thread rendering
        waveformImageDrawer.waveformImage(fromAudioAt: audioURL,
                                          size: bounds.size,
                                          style: .striped,
                                          position: .middle) { image in
            // need to jump back to main queue
            DispatchQueue.main.async {
                self.image = image
            }
        }
    }
    
}
