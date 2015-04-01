//
//  MarketList.h
//  Pasar
//
//  Created by Arie Prasetyo on 4/1/15.
//  Copyright (c) 2015 Arie Prasetyo. All rights reserved.
//

#import "RLMObject.h"

@interface MarketList : RLMObject
@property NSInteger id;
@property NSDate *createdAt;
@property NSDate *updatedAt;
@property NSString *name;
@property NSString *address;
@property NSString *city;
@property NSString *postalCode;
@property NSString *phone;
@property NSString *profile;
@end
