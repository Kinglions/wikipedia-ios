//
//  WMFRevisionQueryResults.h
//  Wikipedia
//
//  Created by Brian Gerstle on 12/16/15.
//  Copyright © 2015 Wikimedia Foundation. All rights reserved.
//

#import <Mantle/Mantle.h>

@class WMFArticleRevision;

NS_ASSUME_NONNULL_BEGIN

@interface WMFRevisionQueryResults : MTLModel <MTLJSONSerializing>

@property (nonatomic, strong) NSString* titleText;

@property (nonatomic, strong) NSArray<WMFArticleRevision*>* revisions;

@end

NS_ASSUME_NONNULL_END
