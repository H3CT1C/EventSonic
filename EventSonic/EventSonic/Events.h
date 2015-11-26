//
//  Events.h
//  EventSonic
//
//  Created by Andres Villa on 11/26/15.
//  Copyright (c) 2015 Andres Villa. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface Events : NSObject

@property NSMutableArray * events;

-(BOOL)createEvent: (Events *) e;//used when user wishes to create a new event
-(Events *)getEventsInfo: (Events *) e;//use when user wishes to get more info for a specific event
-(Events *)eventsAt(Location loc);//When the user wishes to see events at a certain location

@end
