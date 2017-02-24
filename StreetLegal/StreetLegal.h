//
//  StreetLegal.h
//  StreetLegal
//
//  Created by Shahin on 2017-02-09.
//  Copyright © 2017 98%Chimp. All rights reserved.
//

#import <Foundation/Foundation.h>

@protocol StreetLegal <NSObject>

@required

-(void)stopAtRedLight;
-(void)goAtGreenLight;
-(void)moveForward;
-(void)moveBackward;


@optional

-(void)honkIfFacedWithDanger;

@end
