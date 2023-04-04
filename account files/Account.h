// Account.h
// defines methods init() and display().
//---------------------------------------------------------

#include "account.h"                    //class definition in this header file.
//#include <iostream>
#include <iomanip>

// the method init() copies the given arguments
// into the private members of the class.

bool Account::init(  std::string i_name,
                    unsigned long      i_nr,
                    double             i_balance)
    {
        if(i_name.size()<1)       //no empty name accepted 
            return false;
        name    =i_name;
        nr      =i_nr;
        balance =i_balance;
        return true;
    }

// the method display() outputs private data.

void Account::display()
{
    std::cout << std::fixed << std::setprecision(2)
              << "----------------------------------------\n"
              << "Account holder  : "<<name     <<"\n"
              << "Account number  : "<<nr       <<"\n"
              << "Account balance : "<<balance  <<" $$\n"
              << "----------------------------------------\n"
              << std::endl;
}