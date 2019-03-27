//
//  WQYViewController.m
//  WQYHomeModule
//
//  Created by wang-qiuyu on 03/27/2019.
//  Copyright (c) 2019 wang-qiuyu. All rights reserved.
//

#import "WQYViewController.h"
#import <WQYHomeModule/Utils.h>
@interface WQYViewController ()

@end

@implementation WQYViewController

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view, typically from a nib.
    NSLog(@"%d",[Utils checkPassword:@"2121"]);
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

@end
