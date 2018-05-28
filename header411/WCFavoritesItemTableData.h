//
//     Generated by class-dump 3.5 (64 bit).
//
//     class-dump is Copyright (C) 1997-1998, 2000-2001, 2004-2013 by Steve Nygard.
//

#import "NSObject.h"

#import "WCTTableCoding.h"

@class NSString, WCFavoritesItemTableDataPackedInfo;

@interface WCFavoritesItemTableData : NSObject <WCTTableCoding>
{
    BOOL isAutoIncrement;
    unsigned int _localId;
    unsigned int _favId;
    unsigned int _type;
    unsigned int _status;
    unsigned int _localStatus;
    unsigned int _localUpdateSeq;
    unsigned int _updateSeq;
    unsigned int _time;
    unsigned int _sourceType;
    unsigned int _dataTotalSize;
    long long lastInsertedRowID;
    NSString *_sourceId;
    NSString *_xml;
    NSString *_fromUsr;
    NSString *_toUsr;
    NSString *_realChatName;
    WCFavoritesItemTableDataPackedInfo *_m_packedInfo;
}

+ (const struct WCTProperty *)m_packedInfo;
+ (const struct WCTProperty *)dataTotalSize;
+ (const struct WCTProperty *)xml;
+ (const struct WCTProperty *)sourceId;
+ (const struct WCTProperty *)localStatus;
+ (const struct WCTProperty *)sourceType;
+ (const struct WCTProperty *)realChatName;
+ (const struct WCTProperty *)toUsr;
+ (const struct WCTProperty *)fromUsr;
+ (const struct WCTProperty *)localUpdateSeq;
+ (const struct WCTProperty *)updateSeq;
+ (const struct WCTProperty *)status;
+ (const struct WCTProperty *)time;
+ (const struct WCTProperty *)type;
+ (const struct WCTProperty *)favId;
+ (const struct WCTProperty *)localId;
+ (const struct WCTAnyProperty *)AnyProperty;
+ (const list_2812bee2 *)AllProperties;
+ (const struct WCTBinding *)objectRelationalMappingForWCDB;
@property(retain, nonatomic) WCFavoritesItemTableDataPackedInfo *m_packedInfo; // @synthesize m_packedInfo=_m_packedInfo;
@property(nonatomic) unsigned int dataTotalSize; // @synthesize dataTotalSize=_dataTotalSize;
@property(nonatomic) unsigned int sourceType; // @synthesize sourceType=_sourceType;
@property(retain, nonatomic) NSString *realChatName; // @synthesize realChatName=_realChatName;
@property(retain, nonatomic) NSString *toUsr; // @synthesize toUsr=_toUsr;
@property(retain, nonatomic) NSString *fromUsr; // @synthesize fromUsr=_fromUsr;
@property(retain, nonatomic) NSString *xml; // @synthesize xml=_xml;
@property(nonatomic) unsigned int time; // @synthesize time=_time;
@property(nonatomic) unsigned int updateSeq; // @synthesize updateSeq=_updateSeq;
@property(nonatomic) unsigned int localUpdateSeq; // @synthesize localUpdateSeq=_localUpdateSeq;
@property(nonatomic) unsigned int localStatus; // @synthesize localStatus=_localStatus;
@property(nonatomic) unsigned int status; // @synthesize status=_status;
@property(retain, nonatomic) NSString *sourceId; // @synthesize sourceId=_sourceId;
@property(nonatomic) unsigned int type; // @synthesize type=_type;
@property(nonatomic) unsigned int favId; // @synthesize favId=_favId;
@property(nonatomic) unsigned int localId; // @synthesize localId=_localId;
@property(nonatomic) long long lastInsertedRowID; // @synthesize lastInsertedRowID;
@property(nonatomic) BOOL isAutoIncrement; // @synthesize isAutoIncrement;
- (void).cxx_destruct;
- (id)description;
- (void)populateFieldsFromXML;
- (void)copyFieldFromOtherObject:(id)arg1;

@end
