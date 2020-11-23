//
//  MTUtils.h
//  MinewSensorKit
//
//  Created by Minewtech on 2019/8/6.
//  Copyright © 2019 Minewtech. All rights reserved.
//

#import <Foundation/Foundation.h>

NS_ASSUME_NONNULL_BEGIN

@interface MTUtils : NSObject

/**
Device password verification.

 @param password the device password.
*/
+ (NSData *)verficationPassword:(NSString *)password;

/**
Device setting poweroff.
 @param isC the device unit of temperature.
*/
+ (NSData *)setUnit:(BOOL)isC;

/**
Set alarm temperature and humidity
 @param tempH the device temperature.
 @param tempL the device humidity.
 @param humH the device temperature.
 @param humL the device humidity.
*/
+ (NSData *)setHTWarning:(int )tempH temL:(int )tempL humH:(int )humH humL:(int )humL;

/**
Close the temperature and humidity alarm switch.
*/
+ (NSData *)setHTAlarmOff;

/**
Device OTA.

 @param data OTA data which you want to update, return data array that is write to device, but write next data after you need to receive notify success.
*/
+ (NSArray *)ota:(NSData *)data;

/**
Device reset.
*/
+ (NSData *)resetDevice;

/**
Device setting storageData.
 @param isStorage the device whether to store data.
*/
+ (NSData *)setIsStorageData:(BOOL)isStorage;

/**
Get deveice info.
*/
+ (NSData *)readDeviceData;

/**
Get device doorSensor history.
*/
+ (NSData *)readDoorSensorHistory;

/**
Get device HTSensor history.
*/
+ (NSData *)readHTHistory;


@end

NS_ASSUME_NONNULL_END
