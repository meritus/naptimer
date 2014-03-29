//
//  Week.cpp
//  nap_schedule
//
//  Created by Edison Liu on 3/29/14.
//  Copyright (c) 2014 Edison Liu. All rights reserved.
//

#include "Week.h"


Week::Week(){
    for (int i=0; i<7; i++) {
        days[i]=new Day(i);
    }
}
    
//returns true if event in conflict
bool Week::addEvent(int start_hour, int start_min, int finish_hour, int finish_min, int day_name){
    return days[day_name]->addEvent(*new Event(start_hour, start_min, finish_hour, finish_min));
}
