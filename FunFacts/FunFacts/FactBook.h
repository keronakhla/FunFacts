//
//  FactBook.h
//  FunFacts
//
//  Created by Kerolos Nakhla on 9/23/15.
//  Copyright (c) 2015 Treehouse. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface FactBook : NSObject

@property (strong, nonatomic) NSArray *facts;

- (NSString *) randomFact;
@end
