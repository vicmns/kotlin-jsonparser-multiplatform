#import <Foundation/Foundation.h>

@class KCDPTestData, KCDPTestJsonParser;

NS_ASSUME_NONNULL_BEGIN

@interface KotlinBase : NSObject
- (instancetype)init __attribute__((unavailable));
+ (instancetype)new __attribute__((unavailable));
+ (void)initialize __attribute__((objc_requires_super));
@end;

@interface KotlinBase (KotlinBaseCopying) <NSCopying>
@end;

__attribute__((objc_runtime_name("KotlinMutableSet")))
@interface KCDPMutableSet<ObjectType> : NSMutableSet<ObjectType>
@end;

__attribute__((objc_runtime_name("KotlinMutableDictionary")))
@interface KCDPMutableDictionary<KeyType, ObjectType> : NSMutableDictionary<KeyType, ObjectType>
@end;

@interface NSError (NSErrorKotlinException)
@property (readonly) id _Nullable kotlinException;
@end;

__attribute__((objc_subclassing_restricted))
@interface KCDPTestData : KotlinBase
- (instancetype)initWithUserName:(NSString * _Nullable)userName message:(NSString * _Nullable)message userId:(NSString * _Nullable)userId __attribute__((swift_name("init(userName:message:userId:)"))) __attribute__((objc_designated_initializer));
- (NSString * _Nullable)component1 __attribute__((swift_name("component1()")));
- (NSString * _Nullable)component2 __attribute__((swift_name("component2()")));
- (NSString * _Nullable)component3 __attribute__((swift_name("component3()")));
- (KCDPTestData *)doCopyUserName:(NSString * _Nullable)userName message:(NSString * _Nullable)message userId:(NSString * _Nullable)userId __attribute__((swift_name("doCopy(userName:message:userId:)")));
@property NSString * _Nullable userName;
@property NSString * _Nullable message;
@property NSString * _Nullable userId;
@end;

__attribute__((objc_subclassing_restricted))
@interface KCDPTestJsonParser : KotlinBase
+ (instancetype)alloc __attribute__((unavailable));
+ (instancetype)allocWithZone:(struct _NSZone *)zone __attribute__((unavailable));
+ (instancetype)testJsonParser __attribute__((swift_name("init()")));
- (KCDPTestData *)parseJSONFromStringResponse:(NSString * _Nullable)response __attribute__((swift_name("parseJSONFromString(response:)")));
@end;

NS_ASSUME_NONNULL_END
