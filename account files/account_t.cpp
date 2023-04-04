// account_t.cpp
// uses objects of class Account.
//---------------------------------------------------------

#include "Account.h"

int main()
{
    Account current1,current2;

    current1.init("yahia bensehila",1122334455,-4444.66);
    current1.display();

    current2=current1;
    current2.display();


    return 0;
}