//
//  EKSearch.h
//  EKAlgorithms
//
//  Created by Evgeny Karkan on 11.08.13.
//  Copyright (c) 2013 EvgenyKarkan. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface EKSearchStuff : NSObject

+ (NSInteger)indexOfObjectViaLinearSearchForObject:(id)object inArray:(NSArray *)arrayToSearch;
+ (NSInteger)inedxOfObjectViaBinarySearchForObject:(id)object inSortedArray:(NSArray *)sortedArray;

@end