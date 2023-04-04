// this application explain how to use time function 
// there are many ways to use it 'i think 4'

//  The function time() returns the system time expressed as a number of seconds 
//  and writes this value to the variable referenced by current_time.
//  This value can be passed to the function localtime() that
//converts the number of seconds to the local type tm date and returns
//a pointer to this structure.

#include <iostream>
#include <ctime>
#include "Date_methodes.h"

int main ()
{
    struct tm *ptr;
    std::time_t current_time;

                            // the syntax of the time() is :
    time(&current_time);    // time(time_t* arg);
    std::cout << "\n date and  time is -------------->> "<<ctime(&current_time)<<std::endl;
   
   Date now,birthday,adate;
   // initialisation of the real date and the birthday date 
   now.init();
   birthday.init(11,7,1995);
   // printing 
   std::cout<< "\n today date is ";  now.print();
   std::cout<< "\n birthday is   ";  birthday.print();
    
   // creation of pointer to class and reference to class 
   std::cout<<"\n-------------------------------------\n";
   Date *ptr_date;                                          //pointer to class
   Date &ref_date=adate;                                    //refrence to class

   ptr_date=&birthday;
   ptr_date->init(33,43,1145);
   ref_date.init();
   std::cout<< "\n today date is ";  ref_date.print();
   std::cout<< "\n birthday is   ";  ptr_date->print();

   

    return 0;
}
