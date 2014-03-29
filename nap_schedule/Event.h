//
//  Event.h
//  nap_schedule
//
//  Created by Edison Liu on 3/29/14.
//  Copyright (c) 2014 Edison Liu. All rights reserved.
//

#ifndef __nap_schedule__Event__
#define __nap_schedule__Event__

#include <iostream>
#include "Time.h"

class Event{
    
public:
    Time *start_time, *end_time;
    
    struct length_t{
        int hours;
        int mins;
    };
    
    Event(int start_h, int start_m, int finish_h, int finish_m);
    
    //returns true if event interfere each other
    //if either event starts before the other ends && event doesn't end before it starts
    bool does_interfere(Event e);
    
    bool operator<(Event rhs);
    
    //returns true if between 7am -6pm
    bool is_valid();
    
    //returns true if its between noon to 4pm
    bool is_good();
    
    length_t getLength();
    
};

#endif /* defined(__nap_schedule__Event__) */
