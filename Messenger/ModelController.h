//
//  ModelController.h
//  Messenger
//
//  Created by kshitij agarwal on 3/20/15.
//  Copyright (c) 2015 kshitij agarwal. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DataViewController;

@interface ModelController : NSObject <UIPageViewControllerDataSource>

- (DataViewController *)viewControllerAtIndex:(NSUInteger)index storyboard:(UIStoryboard *)storyboard;
- (NSUInteger)indexOfViewController:(DataViewController *)viewController;

@end

