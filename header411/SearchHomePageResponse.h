//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "PBGeneratedMessage.h"

@class BaseResponse, NSMutableArray;

@interface SearchHomePageResponse : PBGeneratedMessage
{
    unsigned int hasBaseResponse:1;
    unsigned int hasBusinessType:1;
    BaseResponse *baseResponse;
    unsigned long long businessType;
    NSMutableArray *mutableContentListList;
}

+ (id)parseFromData:(id)arg1;
@property(retain, nonatomic) NSMutableArray *mutableContentListList; // @synthesize mutableContentListList;
@property(nonatomic, setter=SetBusinessType:) unsigned long long businessType; // @synthesize businessType;
@property(readonly, nonatomic) BOOL hasBusinessType; // @synthesize hasBusinessType;
@property(retain, nonatomic, setter=SetBaseResponse:) BaseResponse *baseResponse; // @synthesize baseResponse;
@property(readonly, nonatomic) BOOL hasBaseResponse; // @synthesize hasBaseResponse;
- (void).cxx_destruct;
- (void)addContentList:(id)arg1;
- (void)addContentListFromArray:(id)arg1;
- (id)mergeFromCodedInputStream:(id)arg1;
- (int)serializedSize;
- (void)writeToCodedOutputStream:(id)arg1;
- (BOOL)isInitialized;
@property(retain, nonatomic) NSMutableArray *contentList; // @dynamic contentList;
- (id)contentListList;
- (id)init;

@end
