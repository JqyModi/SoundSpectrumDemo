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
    private var audioUnitPlayer: AEAudioUnitChannel!
    
    public func initPlayerController() {
        audioController = AEAudioController(audioDescription: AEAudioStreamBasicDescriptionNonInterleavedFloatStereo, inputEnabled: false)
        audioController.preferredBufferDuration = 0.005
        audioController.useMeasurementMode = true
        try? audioController.start()
        // 初始化总控制播放器
//        self.initAudioUnitPlayer()
    }
    
    private func initAudioUnitPlayer() {
        audioUnitPlayer = AEAudioUnitChannel(componentDescription: AEAudioComponentDescriptionMake(kAudioUnitManufacturer_Apple, kAudioUnitType_Generator, kAudioUnitSubType_AudioFilePlayer))
        self.audioController.addChannels([audioUnitPlayer as Any])
    }
    
    public func play(player: AEAudioFilePlayer) {
        if let cplayer = self.existPlayer(player: player) {
            print("播放器已经存在")
//            cplayer.play(atTime: 0)
            cplayer.regionStartTime = 0
            return
        }
        self.audioController.addChannels([player])
        print("channel Count = \(self.audioController.channels()?.count)")
    }
    
    private func existPlayer(player: AEAudioFilePlayer) -> AEAudioFilePlayer? {
        guard let channels = self.audioController.channels() as? [AEAudioFilePlayer] else {return nil}
        for item in channels {
            if player.url.absoluteString.elementsEqual(item.url.absoluteString) {
                return item
            }
//            if player.isEqual(item) {
//                return item
//            }
            break
        }
        return nil
    }
    
    private func existPlayer(player: AEAudioFilePlayer) -> Bool {
        guard let _ = self.existPlayer(player: player) else {return false}
        return true
    }
    
    private func progress() {
        
    }
    
    public func pause() {
        
    }
}
