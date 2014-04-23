//
//  BMAddressedView.h
//  Bitmessage
//
//  Created by Steve Dekorte on 2/21/14.
//  Copyright (c) 2014 Bitmarkets.org. All rights reserved.
//

#import <Cocoa/Cocoa.h>
#import <NavKit/NavKit.h>
#import "MKSell.h"
#import "BMDictView.h"

@interface MKSellView : NSView <NSTextViewDelegate>

@property (assign, nonatomic) NavView *navView;
@property (assign, nonatomic) NavNode *node;


@property (strong) NSTextView *title;
//@property (strong) IBOutlet NSTextView *quantity;
@property (strong) NSTextView *price;
@property (strong) NavRoundButtonView *postOrBuyButton;

@property (strong) NavColoredView *separator;

@property (strong) NSTextView *description;

@property (strong) NSImageView *regionIcon;
@property (strong) NSTextView *region;

@property (strong) NSImageView *categoryIcon;
@property (strong) NSTextView *category;

@property (strong) NSImageView *fromAddressIcon;
@property (strong) NSTextView *fromAddress;

@property (strong) NSImageView *attachedImage;




@property (assign, nonatomic) BOOL isUpdating;

- (MKSell *)sell;

- (void)prepareToDisplay;
- (void)selectFirstResponder;

@end