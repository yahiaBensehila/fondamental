// account.h
// defining the class Account
//-----------------------------------------------------------
#ifndef _ACCOUNT_             //to avoid multipule inclusions.
#define _ACCOUNT_

#include <iostream>
#include <string>

class Account
{
    private:                      //sheltered data members:
        std::string name;           //Account holder
        unsigned long nr;           //Account number
        double balance;             //Account balance رصيد الحساب 

    public:                       //Public interface:
        bool init(std::string,unsigned long,double);
        void display();
};
#endif // _ACCOUNT_