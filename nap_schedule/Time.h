//
//  Time.h
//  nap_schedule
//
//  Created by Edison Liu on 3/29/14.
//  Copyright (c) 2014 Edison Liu. All rights reserved.
//

#ifndef __nap_schedule__Time__
#define __nap_schedule__Time__

#include <iostream>

class Time{
    
public:
    int hour_; //0 - 23 hours
    int min_; //0-59 min
    
    Time(int hour, int min);
    bool operator=(Time t);
    bool operator<(Time t);
    bool operator>(Time t);
    bool operator<=(Time t);
    bool operator>=(Time t);
};

#endif /* defined(__nap_schedule__Time__) */
