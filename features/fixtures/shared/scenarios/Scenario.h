//
// Created by Jamie Lynch on 23/03/2018.
// Copyright (c) 2018 Bugsnag. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <Bugsnag/Bugsnag.h>

void markErrorHandledCallback(const BSG_KSCrashReportWriter * _Nonnull writer);

@interface Scenario : NSObject

@property (strong, nonatomic, nonnull) BugsnagConfiguration *config;

+ (Scenario *_Nonnull)createScenarioNamed:(NSString *_Nonnull)className
                               withConfig:(BugsnagConfiguration *_Nonnull)config;

- (instancetype _Nonnull)initWithConfig:(BugsnagConfiguration *_Nonnull)config;

/**
 * Executes the test case
 */
- (void)run;

- (void)startBugsnag;

- (void)didEnterBackgroundNotification;

@property (nonatomic, strong, nullable) NSString *eventMode;
@end
