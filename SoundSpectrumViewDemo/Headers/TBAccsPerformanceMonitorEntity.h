//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled Sep 17 2017 16:24:48).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2015 by Steve Nygard.
//

#import <objc/NSObject.h>

@class NSString;

@interface TBAccsPerformanceMonitorEntity : NSObject
{
    _Bool _ret;
    int _error_code;
    double _start_send_date;
    double _enter_queue_date;
    double _talk_date;
    double _send_date;
    double _receive_ack_date;
    double _to_bz_date;
    double _start_to_enter_queue_time;
    double _in_queue_time;
    double _talk_to_send_time;
    double _send_to_receive_time;
    double _receive_to_call_back_time;
    double _total_time;
    NSString *_accs_sdk_version;
    NSString *_device_id;
    NSString *_service_id;
    NSString *_data_id;
    NSString *_fail_reasons;
    NSString *_host;
    NSString *_accs_type;
}

@property(retain, nonatomic) NSString *accs_type; // @synthesize accs_type=_accs_type;
@property(retain, nonatomic) NSString *host; // @synthesize host=_host;
@property(retain, nonatomic) NSString *fail_reasons; // @synthesize fail_reasons=_fail_reasons;
@property(nonatomic) int error_code; // @synthesize error_code=_error_code;
@property(nonatomic) _Bool ret; // @synthesize ret=_ret;
@property(retain, nonatomic) NSString *data_id; // @synthesize data_id=_data_id;
@property(retain, nonatomic) NSString *service_id; // @synthesize service_id=_service_id;
@property(retain, nonatomic) NSString *device_id; // @synthesize device_id=_device_id;
@property(retain, nonatomic) NSString *accs_sdk_version; // @synthesize accs_sdk_version=_accs_sdk_version;
@property(nonatomic) double total_time; // @synthesize total_time=_total_time;
@property(nonatomic) double receive_to_call_back_time; // @synthesize receive_to_call_back_time=_receive_to_call_back_time;
@property(nonatomic) double send_to_receive_time; // @synthesize send_to_receive_time=_send_to_receive_time;
@property(nonatomic) double talk_to_send_time; // @synthesize talk_to_send_time=_talk_to_send_time;
@property(nonatomic) double in_queue_time; // @synthesize in_queue_time=_in_queue_time;
@property(nonatomic) double start_to_enter_queue_time; // @synthesize start_to_enter_queue_time=_start_to_enter_queue_time;
@property(nonatomic) double to_bz_date; // @synthesize to_bz_date=_to_bz_date;
@property(nonatomic) double receive_ack_date; // @synthesize receive_ack_date=_receive_ack_date;
@property(nonatomic) double send_date; // @synthesize send_date=_send_date;
@property(nonatomic) double talk_date; // @synthesize talk_date=_talk_date;
@property(nonatomic) double enter_queue_date; // @synthesize enter_queue_date=_enter_queue_date;
@property(nonatomic) double start_send_date; // @synthesize start_send_date=_start_send_date;
- (void).cxx_destruct;

@end
