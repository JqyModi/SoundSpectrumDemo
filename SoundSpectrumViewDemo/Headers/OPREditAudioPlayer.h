//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class AEAudioFileOutput, AEAudioUnitOutput, AEMixerModule, OPRContentGeneratingContext;

@interface OPREditAudioPlayer : NSObject
{
    AEMixerModule *_mixModule;
    AEMixerModule *_mixModuleForFileOutput;
    AEAudioUnitOutput *_audioPlayOutput;
    AEAudioFileOutput *_audioFileOutput;
    OPRContentGeneratingContext *_context;
}

@property(retain, nonatomic) OPRContentGeneratingContext *context; // @synthesize context=_context;
@property(retain, nonatomic) AEAudioFileOutput *audioFileOutput; // @synthesize audioFileOutput=_audioFileOutput;
@property(retain, nonatomic) AEAudioUnitOutput *audioPlayOutput; // @synthesize audioPlayOutput=_audioPlayOutput;
@property(retain, nonatomic) AEMixerModule *mixModuleForFileOutput; // @synthesize mixModuleForFileOutput=_mixModuleForFileOutput;
@property(retain, nonatomic) AEMixerModule *mixModule; // @synthesize mixModule=_mixModule;
- (void).cxx_destruct;
- (void)clearPlayModule;
- (void)resetAudioPlay;
- (void)resumeAudioPlay;
- (void)pauseAudioPlay;
- (void)startAudioplay;
- (id)initWithContext:(id)arg1;

@end

