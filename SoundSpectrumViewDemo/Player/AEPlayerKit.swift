//
//  AEPlayerKit.swift
//  SoundSpectrumViewDemo
//
//  Created by Modi on 2020/7/2.
//  Copyright © 2020 Modi. All rights reserved.
//

import UIKit
import TheAmazingAudioEngine

class AEPlayerKit: NSObject {
    
    public static let shared = AEPlayerKit()
    
    private var audioController: AEAudioController!
    
    public func initPlayerController() {
        audioController = AEAudioController(audioDescription: AEAudioStreamBasicDescriptionNonInterleavedFloatStereo, inputEnabled: false)
        audioController.preferredBufferDuration = 0.005
        audioController.useMeasurementMode = true
        try? audioController.start()
    }
    
    public func play(player: AEAudioFilePlayer) {
        if self.existPlayer(player: player) {
            print("播放器已经存在")
            return
        }
//        self.audioController.removeChannels([player])
        player.removeUponFinish = true
        player.completionBlock = {
//            self.audioController.removeChannels([player])
        }
        self.audioController.addChannels([player])
        print("channel Count = \(self.audioController.channels()?.count)")
    }
    
    private func existPlayer(player: AEAudioFilePlayer) -> Bool {
        guard let channels = self.audioController.channels() as? [AEAudioFilePlayer] else {return false}
        for item in channels {
            if player.url.absoluteString.elementsEqual(item.url.absoluteString) {
                return true
            }
        }
        return false
    }
}
