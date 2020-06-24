//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSArray, NSString, OPRRoomCommandParticipantData;

@interface OPRRoomCommandBaseInfoData : NSObject
{
    _Bool _moreParticipant;
    NSString *_roomId;
    unsigned long long _roomType;
    unsigned long long _roomState;
    NSArray *_participants;
    OPRRoomCommandParticipantData *_singerInfo;
    NSString *_currentSegmentId;
    long long _currentRound;
    long long _currentTurn;
    long long _totalTurn;
    long long _participantCount;
}

@property(nonatomic) long long participantCount; // @synthesize participantCount=_participantCount;
@property(nonatomic) long long totalTurn; // @synthesize totalTurn=_totalTurn;
@property(nonatomic) long long currentTurn; // @synthesize currentTurn=_currentTurn;
@property(nonatomic) long long currentRound; // @synthesize currentRound=_currentRound;
@property(retain, nonatomic) NSString *currentSegmentId; // @synthesize currentSegmentId=_currentSegmentId;
@property(retain, nonatomic) OPRRoomCommandParticipantData *singerInfo; // @synthesize singerInfo=_singerInfo;
@property(nonatomic) _Bool moreParticipant; // @synthesize moreParticipant=_moreParticipant;
@property(retain, nonatomic) NSArray *participants; // @synthesize participants=_participants;
@property(nonatomic) unsigned long long roomState; // @synthesize roomState=_roomState;
@property(nonatomic) unsigned long long roomType; // @synthesize roomType=_roomType;
@property(retain, nonatomic) NSString *roomId; // @synthesize roomId=_roomId;
- (void).cxx_destruct;

@end
