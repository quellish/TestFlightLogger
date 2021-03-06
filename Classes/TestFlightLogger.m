//
//  TestFlightLogger.m
//  TestFlightLogger
//
//  Created by Dan Zinngrabe on 1/21/11.
//  Copyright (c) 2011 quellish.org. All rights reserved.
//

#import "TestFlightLogger.h"

@implementation TestFlightLogger

- (id)initWithTeamToken:(NSString *)teamToken {
    self = [super init];
    if (self) {
        if (teamToken != nil){
            // Initialize testflight remote logging using the token
            [TestFlight takeOff:teamToken];
        }
    }
    
    return self;
}

- (void)logMessage:(DDLogMessage *)logMessage
{
    NSString    *logMsg     = nil;
    
    logMsg = logMessage->logMsg;
    if (formatter != nil){
        logMsg = [formatter formatLogMessage:logMessage];
    }
    
    if (logMsg != nil){
        TFLog(logMsg);
    }
    return;
}

@end
