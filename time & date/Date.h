// the class of date
// has the declaration of the class :data members and member functions
 #ifndef _DATE_
 #define _DATE_

#include <iostream>

class Date
{
    private :
        int day;
        int month;
        int year;
    public :
        void init(int day,int month,int year);
        void init(void);
        void print(void);    
};
#endif