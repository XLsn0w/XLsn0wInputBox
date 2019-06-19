//
//  ViewController.m
//  XLsn0wInputBox
//
//  Created by Mac on 2019/6/19.
//  Copyright © 2019 XLsn0w. All rights reserved.
//

#import "ViewController.h"
#import "XLsn0wInputBox.h"
#import <XLsn0w.h>

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view.
}

- (IBAction)show:(id)sender {
    [self showXLsn0wInputBox];
}

- (void)showXLsn0wInputBox {
    XLsn0wInputBox *inputBox = [XLsn0wInputBox new];
    inputBox.title.text = @"使用方法";
    inputBox.placeholder = @"请输入使用方法";
    [inputBox confirmBtnClickBlock:^(NSString *inputString) {
        XLsn0wLog(@"inputString = %@", inputString);
    }];
    [inputBox show];
}

@end
