//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OplogRet : PBGeneratedMessage
{
    unsigned int hasCount:1;
    int retMemoizedSerializedSize;
    unsigned int count;
    NSMutableArray *mutableRetList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableRetList; // @synthesize mutableRetList;
@property(nonatomic, setter=SetCount:) unsigned int count; // @synthesize count;
@property(readonly, nonatomic) BOOL hasCount; // @synthesize hasCount;
- (void).cxx_destruct;
- (void)addRetFromArray:(id)arg1;
- (void)addRet:(int)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *ret; // @dynamic ret;
- (id)retList;
- (id)init;

@end
