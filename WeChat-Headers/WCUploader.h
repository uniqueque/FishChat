//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "MMObject.h"

#import "PBMessageObserverDelegate.h"

@interface WCUploader : MMObject <PBMessageObserverDelegate>
{
    long long eventID;
    _Bool bStop;
}

- (void)MessageReturn:(id)arg1 Event:(unsigned int)arg2;
- (void)onResponse:(id)arg1 Event:(unsigned int)arg2;
- (_Bool)onSetRequest:(id)arg1;
- (void)setStop;
- (void)setFinished;
- (void)run;
- (_Bool)startRequest;
- (void)dealloc;

@end

