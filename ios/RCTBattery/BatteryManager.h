
//
//  BatteryManager.h
//  RCTBattery
//
//  Created by Olajide Ogundipe Jr on 9/15/15.


#import <React/RCTBridgeModule.h>
#import <React/RCTEventEmitter.h>

@interface BatteryManager : RCTEventEmitter <RCTBridgeModule>
@property (nonatomic) bool isPlugged;

@end
