//
//  Utils.h
//  HuiZhaofang
//
//  Created by qiuyu on 15/5/19.
//  Copyright (c) 2015年 qiuyu. All rights reserved.
//

#import <Foundation/Foundation.h>
//#import "Broker_Swift-Swift.h"
typedef NS_ENUM(NSInteger,IphoneDeviceType) {
    
    Unknown = 0,
    Simulator,
    IPhone_1G,          //基本不用
    IPhone_3G,          //基本不用
    IPhone_3GS,         //基本不用
    IPhone_4,           //基本不用
    IPhone_4s,          //基本不用
    IPhone_5,
    IPhone_5C,
    IPhone_5S,
    IPhone_SE,
    IPhone_6,
    IPhone_6P,
    IPhone_6s,
    IPhone_6s_P,
    IPhone_7,
    IPhone_7P,
    IPhone_8,
    IPhone_8P,
    IPhone_X,
};


//#define APPDEL ((AppDelegate *)[UIApplication sharedApplication].delegate)

@interface Utils : NSObject
#pragma 正则匹配手机号
+ (BOOL)checkTelNumber:(NSString *) telNumber;
#pragma 正则匹配用户密码6-18位数字和字母组合
+ (BOOL)checkPassword:(NSString *) password;
#pragma 正则匹配用户姓名,20位的中文或英文
+ (BOOL)checkUserName : (NSString *) userName;
#pragma 正则匹配用户身份证号
+ (BOOL)checkUserIdCard: (NSString *) idCard;
#pragma 正则验证码,12位的数字
+ (BOOL)checkEmployeeNumber : (NSString *) number;
#pragma 正则匹配URL
+ (BOOL)checkURL : (NSString *) url;
//邮箱
+ (BOOL) validateEmail:(NSString *)email;
//手机号码验证
+ (BOOL) validateMobile:(NSString *)mobile;
//车牌号验证
+ (BOOL) validateCarNo:(NSString *)carNo;
//用户名
+ (BOOL) validateUserName:(NSString *)name;
//昵称
+ (BOOL) validateNickname:(NSString *)nickname;
//密码
+ (BOOL) validatePassword:(NSString *)passWord;
//身份证号
//+ (BOOL) validateIdentityCard: (NSString *)identityCard;
//地址
+ (BOOL) validateAddress:(NSString *)address;
//意见反馈内容
+ (BOOL)validateFeedback:(NSString *)feedback;
//身份证
+ (BOOL)validateIDCardNumber:(NSString *)value;
+(BOOL)validaSearchText:(NSString *)value;
+ (BOOL)checkContractNumber : (NSString *) userName;
/**
 *  判断字符串是否为空
 */
+ (BOOL)isBlankString:(NSString *)string;
+ (BOOL)isBlankArray:(NSArray *)arr;


+ (void)hideNavigationBarBottomLine:(UINavigationBar *)navigationBar;

/** 从时间戳获取date */
+ (NSDate *)getDateFromTimetamp:(NSNumber *)timetamp;

/** 从时间戳获取时间yyyy-MM-dd HH:mm:ss  */
+ (NSString *)getTimeFromTimetamp:(NSNumber *)timetamp;

+ (BOOL)isExpiredStartTime:(NSDate *)startTime endTime:(NSDate *)endTime period:(NSInteger)period;
+ (BOOL)isExpiredCreatTime:(NSInteger)timeNumber period:(NSInteger)period;
+ (BOOL)isExpiredDeadTime:(NSInteger)timeNumber;


+ (BOOL)StartTime:(NSDate *)startTime endTime:(NSDate *)endTime betweenperiod:(NSInteger)period;

/** 本地路径MD5 */
+(NSString*)getFileMD5WithPath:(NSString*)path;


/**
 price:金额（单位：分）
 PriceStr：显示金额字符串
 */
+ (NSString *)getPriceStr:(NSInteger)price;


/** 获取今天几点的date */
+ (NSDate *)getTodayClockDate:(NSInteger)clock;
/** 获取今天时分秒的date */
+ (NSDate *)getTodayClockDate:(NSInteger)hour minute:(NSInteger)minute second:(NSInteger)second;

//获取当前时间
+ (void)obtainSystemTimeAndDate:(void(^)(NSString *year,NSString *month,NSString *day))dateString;
//获取当前时间
+ (void)obtainTimeDateFrom:(NSDate *)date dateString:(void(^)(NSString *year,NSString *month,NSString *day))dateString;
// 获取某年某月总共多少天
+ (NSInteger)getDaysInMonth:(NSInteger)year month:(NSInteger)imonth;
//获取该日期的明天日期
+ (NSString *)GetTomorrowDay:(NSDate *)aDate;
+ (UIViewController *)getCurrentActiveViewController;


+ (IphoneDeviceType)deviceType;

+ (BOOL)isIphone5Size;
@end
