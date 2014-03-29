//
//  Day.h
//  nap_schedule
//
//  Created by Edison Liu on 3/29/14.
//  Copyright (c) 2014 Edison Liu. All rights reserved.
//

#ifndef __nap_schedule__Day__
#define __nap_schedule__Day__

#include <iostream>
#include <list>
#include "Event.h"

class Day{
    
public:
    int day_name;
    std::list<Event> events;
    
    Day(int day_name);
    
    //returns true if event interfering
    bool addEvent(Event e);
    
    //gives you lhs>rhs in terms of length
    bool biggerLength(Event lhs, Event rhs);
    
    //returns an optimal free time using a compliment-day
    void optimalEvent();
    
    Day *getComplement();
};

#endif /* defined(__nap_schedule__Day__) */
