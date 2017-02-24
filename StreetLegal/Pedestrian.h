//
//  Pedestrian.h
//  StreetLegal
//
//  Created by Shahin on 2017-02-22.
//  Copyright © 2017 98%Chimp. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "StreetLegal.h"

@interface Pedestrian : NSObject <StreetLegal>

@property int numberOfLimbs;
@property NSString *name;
@property int age;

@end
