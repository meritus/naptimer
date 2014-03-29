//
//  Day.cpp
//  nap_schedule
//
//  Created by Edison Liu on 3/29/14.
//  Copyright (c) 2014 Edison Liu. All rights reserved.
//

#include "Day.h"
#include <list>
#include "Event.h"

Day::Day(int day_name){
    this->day_name=day_name;
}

//returns true if event interfering
bool Day::addEvent(Event e){
    bool is_interfering=0;
    //loops through list to check if events interfering
    for (std::list<Event>::iterator it=events.begin(); it != events.end(); ++it)
        is_interfering=is_interfering||(*it).does_interfere(e);
    events.push_back(e);
    events.sort();
    return is_interfering;
}

/*
//gives you lhs>rhs in terms of length
bool Day::biggerLength(Event lhs, Event rhs){
    Event::length_t lhs_length=lhs.getLength();
    Event::length_t rhs_length=rhs.getLength();
    return lhs_length.hours>rhs_length.hours || (lhs_length.hours=rhs_length.hours && lhs_length.mins>rhs_length.mins);
}
 */

//returns an optimal free time using a compliment-day
void Day::optimalEvent(){
    /*
    std::list<Event> valid;
    for (std::list<Event>::iterator it=events.begin(); it != events.end(); ++it){
        if((*it).is_valid())
            valid.push_back(*it);
    }
    for (std::list<Event>::iterator it=valid.begin(); it != valid.end(); ++it){
        if(it->is_good())
           return *it;
    }
    valid.sort(biggerLength);
    if(valid.length()>0)
       return valid.front();
    else
       return NULL;
    */
}



Day *Day::getComplement(){
    /*
    Day* comp=new Day(day_name);
    Event first = events.front();
    if(*first.start_time>*(new Time(7, 00))){
        Event e(7, 00,
        comp.addEvent();
    }
    for (std::list<Event>::iterator it=events.begin(); it != events.end(); ++it){
            
    }
    */
    return 0;
}