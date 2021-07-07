//
//     Generated by class-dump 3.5 (64 bit) (Debug version compiled May 11 2021 09:30:43).
//
//  Copyright (C) 1997-2019 Steve Nygard.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/NSSecureCoding-Protocol.h>

@class NSString;

@interface XCTApplicationStateSnapshot : NSObject <NSSecureCoding>
{
    int _processID;
    NSString *_bundleID;
    NSString *_path;
    unsigned long long _runState;
    unsigned long long _activationPolicy;
    unsigned long long _eventID;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly) unsigned long long eventID; // @synthesize eventID=_eventID;
@property(readonly) unsigned long long activationPolicy; // @synthesize activationPolicy=_activationPolicy;
@property(readonly) int processID; // @synthesize processID=_processID;
@property(readonly) unsigned long long runState; // @synthesize runState=_runState;
@property(readonly, copy) NSString *path; // @synthesize path=_path;
@property(readonly, copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithBundleID:(id)arg1 path:(id)arg2 runState:(unsigned long long)arg3 processID:(int)arg4 activationPolicy:(unsigned long long)arg5 eventID:(unsigned long long)arg6;

@end
