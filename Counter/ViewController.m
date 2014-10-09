//
//  ViewController.m
//  Counter
//
//  Created by Tristan Breetz on 9/4/14.
//  Copyright (c) 2014 Tristan Breetz. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController
            
- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
    Progress.progress = ProgressValue;
    Label.text = [NSString stringWithFormat:@"%d", Number];
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


-(IBAction)addOne:(id)sender{
    if (MultiplySwitch.isOn){
    Number = Number * 2;
    ProgressValue = ProgressValue * 2;
    Label.text = [NSString stringWithFormat:@"%d", Number];
    Progress.progress = ProgressValue;
    }
    else{
        Number += 1;
        ProgressValue += .01;
        Label.text = [NSString stringWithFormat:@"%d", Number];
        Progress.progress = ProgressValue;
    }
    
}
-(IBAction)subtractOne:(id)sender{
    if (MultiplySwitch.isOn){
    Number = Number / 2;
    ProgressValue = ProgressValue / 2;
    Label.text = [NSString stringWithFormat:@"%d", Number];
    Progress.progress = ProgressValue;
    }
    else{
        Number -= 1;
        ProgressValue -= .01;
        Label.text = [NSString stringWithFormat:@"%d", Number];
        Progress.progress = ProgressValue;
    }
}
-(IBAction)reset:(id)sender{
    ProgressValue = 0;
    Number = 0;
    Label.text = [NSString stringWithFormat:@"%d", Number];
    Progress.progress = ProgressValue;
}
-(IBAction)multiplySwitch:(id)sender{
    if (MultiplySwitch.isOn){
        [SubtractOne setTitle:@"/ 2" forState:normal];
        [AddOne setTitle:@"* 2" forState:normal];
    }
    else{
        [SubtractOne setTitle:@"Subtract One" forState:normal];
        [AddOne setTitle:@"Add One" forState:normal];
    }
}




@end
