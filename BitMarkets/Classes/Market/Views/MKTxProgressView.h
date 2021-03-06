//
//  MKTxProgressView.h
//  BitMarkets
//
//  Created by Steve Dekorte on 6/4/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <NavKit/NavKit.h>
#import "MKNodeView.h"
#import "MKStepsView.h"
#import "MKTransaction.h"
#import "MKStatusView.h"
#import "MKPostView.h"

@interface MKTxProgressView : MKNodeView

@property (assign, nonatomic) NavView *navView;

@property (strong, nonatomic) MKStepsView *stepsView;
@property (strong, nonatomic) MKStatusView *statusView;
@property (strong, nonatomic) NavColoredView *bottomView;
@property (strong, nonatomic) MKPostView *postView; 
@property (strong, nonatomic) NavColoredView *maskView; // overlays grey

@end
