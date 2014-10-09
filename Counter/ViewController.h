//
//  ViewController.h
//  Counter
//
//  Created by Tristan Breetz on 9/4/14.
//  Copyright (c) 2014 Tristan Breetz. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController{
    IBOutlet UILabel *Label;
    IBOutlet UIProgressView *Progress;
    IBOutlet UISwitch *MultiplySwitch;
    IBOutlet UIButton *AddOne;
    IBOutlet UIButton *SubtractOne;
    int Number;
    float ProgressValue;
}
-(IBAction)addOne:(id)sender;
-(IBAction)subtractOne:(id)sender;
-(IBAction)reset:(id)sender;
-(IBAction)multiplySwitch:(id)sender;





@end

