//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class SessionSortCache;

@interface SessionSortLogic : NSObject
{
    SessionSortCache *_oSessionSortCache;
}

- (void).cxx_destruct;
- (void)setMergeFlag;
- (_Bool)hasMergeFlag;
- (_Bool)isTopSessionCountExceed;
- (id)getUntopTime:(id)arg1;
- (id)getTopTime:(id)arg1;
- (void)RemoveUntopSession;
- (void)UntopSession:(id)arg1;
- (void)TopSession:(id)arg1;
- (id)getCurrentDate;
- (void)ReloadCache;
- (void)SaveCache;
- (void)LoadCache;
- (void)LoadSortDataInternal;
- (void)saveSortDataInternal;
- (id)getSortCacheDataFilePath;
- (id)getOldSortCacheDataFilePath;
- (id)init;

@end

