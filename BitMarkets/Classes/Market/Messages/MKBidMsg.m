//
//  MKBidMsg.m
//  BitMarkets
//
//  Created by Steve Dekorte on 5/2/14.
//  Copyright (c) 2014 voluntary.net. All rights reserved.
//

#import <FoundationCategoriesKit/FoundationCategoriesKit.h>
#import "MKBidMsg.h"
#import "MKRootNode.h"

@implementation MKBidMsg

- (BOOL)isInBuy
{
    return [self.nodeParent isKindOfClass:MKBuyBid.class];
}

- (NSString *)nodeTitle
{    
    if (self.isInBuy)
    {
        return @"Bid Sent";
    }
    
    return @"Bid Received";
}

- (NSString *)nodeSubtitle
{
    if (self.isInBuy)
    {
        return self.dateString;
    }
    
    return [NSString stringWithFormat:@"From %@", self.sellerAddress];
}

- (void)setupForPost:(MKPost *)mkPost
{
    [self.dict removeAllObjects];
    //[self.dict addEntriesFromDictionary:mkPost.propertiesDict];
    
    [self.dict setObject:self.classNameSansPrefix forKey:@"_type"];
    [self.dict setObject:mkPost.postUuid          forKey:@"postUuid"];
    [self.dict setObject:mkPost.sellerAddress     forKey:@"sellerAddress"];
    [self.dict setObject:self.myAddress           forKey:@"buyerAddress"];
}

- (BOOL)send
{
    return [self sendToSeller];
}


@end
