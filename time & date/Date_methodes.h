#pragma once;

#include <iostream>
#include "Date.h"
#include <ctime>


void Date::init(int d,int m,int y)      //set the date chosen to the data members of the class
{
    day=d;
    month=m;
    year=y;

}
void Date::init()                       //set the real time to the data members of the class
{
    struct tm *ptr_2_time;
    time_t current_time;
    time(&current_time);
    ptr_2_time=localtime(&current_time);

        day     =ptr_2_time->tm_mday;
        month   =ptr_2_time->tm_mon+1;
        year    =ptr_2_time->tm_year+1900;
}

inline void Date::print()                      //output the date.
{
     std::cout<<"\t"<<month<<"-"<<day<<"-"<<year<<std::endl;
}