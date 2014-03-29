//
//  Time.cpp
//  nap_schedule
//
//  Created by Edison Liu on 3/29/14.
//  Copyright (c) 2014 Edison Liu. All rights reserved.
//

#include "Time.h"

Time::Time(int hour, int min) : hour_(hour), min_(min){}

bool Time::operator=(Time t){
    return t.hour_==hour_ && t.min_==min_; //hour and min are equal
}

bool Time::operator<(Time t){
    return hour_<t.hour_ || (hour_==t.hour_ && min_ < t.min_);  //hour less than, or hour= and min less than
}

bool Time::operator>(Time t){
    return hour_>t.hour_ || (hour_==t.hour_ && min_ > t.min_) ; //hour less than, or hour= and min less than
}


bool Time::operator<=(Time t){
    return (*this<t) || this->operator=(t);
}

bool Time::operator>=(Time t){
    return (*this>t) || this->operator=(t);
}
