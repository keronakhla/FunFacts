//
//  ViewController.h
//  FunFacts
//
//  Created by Kerolos Nakhla on 9/23/15.
//  Copyright (c) 2015 Treehouse. All rights reserved.
//

#import <UIKit/UIKit.h>

@class FactBook;

@interface ViewController : UIViewController

@property (weak, nonatomic) IBOutlet UILabel *funFactLabel;
@property (strong, nonatomic) FactBook *factBook;
@end

