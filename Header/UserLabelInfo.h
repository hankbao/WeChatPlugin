//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface UserLabelInfo : PBGeneratedMessage
{
    unsigned int hasUserName:1;
    unsigned int hasLabelIdlist:1;
    NSString *userName;
    NSString *labelIdlist;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic, setter=SetLabelIdlist:) NSString *labelIdlist; // @synthesize labelIdlist;
@property(readonly, nonatomic) BOOL hasLabelIdlist; // @synthesize hasLabelIdlist;
@property(retain, nonatomic, setter=SetUserName:) NSString *userName; // @synthesize userName;
@property(readonly, nonatomic) BOOL hasUserName; // @synthesize hasUserName;
- (void).cxx_destruct;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
- (id)init;

@end

