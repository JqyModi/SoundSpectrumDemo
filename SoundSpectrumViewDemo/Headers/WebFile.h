//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSData, NSDate, NSMutableData, NSString, NSURLConnection;
@protocol WebFileDelegate;

@interface WebFile : NSObject
{
    NSDate *_creationDate;
    NSString *_fileName;
    NSString *_filePath;
    NSString *_URL;
    NSString *_userDefineKey;
    NSData *_data;
    id <WebFileDelegate> _delegate;
    NSURLConnection *_fileConnection;
    NSMutableData *_tempData;
}

@property(retain, nonatomic) NSMutableData *tempData; // @synthesize tempData=_tempData;
@property(retain, nonatomic) NSURLConnection *fileConnection; // @synthesize fileConnection=_fileConnection;
@property(nonatomic) id <WebFileDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSData *data; // @synthesize data=_data;
@property(retain, nonatomic) NSString *userDefineKey; // @synthesize userDefineKey=_userDefineKey;
@property(retain, nonatomic) NSString *URL; // @synthesize URL=_URL;
@property(retain, nonatomic) NSString *filePath; // @synthesize filePath=_filePath;
@property(retain, nonatomic) NSString *fileName; // @synthesize fileName=_fileName;
@property(retain, nonatomic) NSDate *creationDate; // @synthesize creationDate=_creationDate;
- (void)connection:(id)arg1 didFailWithError:(id)arg2;
- (void)connectionDidFinishLoading:(id)arg1;
- (void)connection:(id)arg1 didReceiveData:(id)arg2;
- (void)connection:(id)arg1 didReceiveResponse:(id)arg2;
- (void)download;
@property(readonly) _Bool isLocal;
- (void)dealloc;

@end
