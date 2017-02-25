//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

@class NSString;

@interface LSTargetGenerator : NSObject
{
    unsigned int _type;
    NSString *_string;
    SEL _sel;
    CDUnknownBlockType _block;
}

+ (id)createByBlock:(CDUnknownBlockType)arg1;
+ (id)createBySel:(SEL)arg1;
+ (id)createByString:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(nonatomic) SEL sel; // @synthesize sel=_sel;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)getTarget:(id)arg1 withParams:(id)arg2;
- (id)getTarget:(id)arg1;
- (id)init;

@end
