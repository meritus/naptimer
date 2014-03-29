//
//  Week.h
//  nap_schedule
//
//  Created by Edison Liu on 3/29/14.
//  Copyright (c) 2014 Edison Liu. All rights reserved.
//

#ifndef __nap_schedule__Week__
#define __nap_schedule__Week__

#include <iostream>
#include "Day.h"

class Week{
    
public:
    Day *days[7];
    
    Week();
    
    //returns true if event in conflict
    bool addEvent(int start_hour, int start_min, int finish_hour, int finish_min, int day_name);
    
};

#endif /* defined(__nap_schedule__Week__) */
