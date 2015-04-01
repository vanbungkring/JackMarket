//
//  MarketDelegate.h
//  Pasar
//
//  Created by Arie Prasetyo on 4/1/15.
//  Copyright (c) 2015 Arie Prasetyo. All rights reserved.
//
#import <Foundation/Foundation.h>

@protocol APIManagerMarketDelegate <NSObject>

@optional
- (void)didReceiveUsersActivities:(NSArray *)usersActivities;
- (void)fetchingUsersActivitiesFailedWithError:(NSError *)error;

- (void)didReceiveUsersOnboarding:(NSArray *)usersOnboarding;
- (void)fetchingUsersOnboardingFailedWithError:(NSError *)error;

@end

