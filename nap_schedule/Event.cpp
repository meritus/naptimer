//
//  Event.cpp
//  nap_schedule
//
//  Created by Edison Liu on 3/29/14.
//  Copyright (c) 2014 Edison Liu. All rights reserved.
//

#include "Event.h"

Event::Event(int start_h, int start_m, int finish_h, int finish_m){
    start_time=new Time(start_h, start_m);
    end_time=new Time(finish_h, finish_m);
}

//returns true if event interfere each other
//if either event starts before the other ends && event doesn't end before it starts
bool Event::does_interfere(Event e){
    /**
     cout<<"(*start_time<*(e.end_time)? "<< (*start_time<*e.end_time) <<endl;
     cout<<"(*end_time>*(e.start_time))? "<< (*end_time>*e.start_time) <<endl;
     cout<<"(*(e.start_time)<*end_time? "<< (*e.start_time<*end_time) <<endl;
     cout<<"*(e.end_time)>*start_time) "<< (*e.end_time>*start_time) <<endl;**/
    return (*start_time<*e.end_time && (*end_time>*e.start_time)) || (*e.start_time<*end_time && *e.end_time>*start_time);
}

bool Event::operator<(Event rhs){
    return (*(this->end_time))<(*(rhs.end_time));
}

//returns true if between 7am -6pm
bool Event::is_valid(){
    return (start_time->hour_>7 && end_time->hour_<18) || (start_time->hour_<=7 && end_time->hour_>=18);
}

//returns true if its between noon to 4pm
bool Event::is_good(){
    return (start_time->hour_>12 && end_time->hour_<16) || (start_time->hour_<=12 && end_time->hour_>=16);
}

Event::length_t Event::getLength(){
    length_t ret;
    ret.hours=abs(end_time->hour_-start_time->hour_);
    ret.mins=abs(end_time->min_-start_time->min_);
    return ret;
}