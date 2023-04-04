// declaration of pointers vers une class 
// creation of a function to add new account holder.


#include "Account.h"
bool getAccount(Account *ptr_account);

int main()
{
    Account current, saving ;
    current.init("yahia bensehila",22564,14000000000);
    current.display();

    Account *obj;
    obj=&saving;
    if(getAccount(obj)) (*obj).display();                   //is the same obj->display()
    else std::cout <<"\n there is an error !\n ";
    

    
    return 0;
    
}

bool getAccount(Account *ptr_account)
{
        std::string name;
        unsigned long  nr;
        double balance;

        std::cout << "\n enter the name :";
        if(!(getline(std::cin,name) || name.size()<1)) 
            return false;
        else std::cout <<"\t \t done --> name \n";
        std::cout<< "\n enter the number of holder :";
        if(!(std::cin>>nr)) 
            return false;
        else std::cout <<"\t \t done --> number \n";
        std::cout <<" \n enter the balance account :";
        if(!(std::cin>>balance)) 
            return false;
        else std::cout <<"\t \t done --> balance \n";
        // because the compiler get here 
        // every thing is ok 
        // call the function init()
        ptr_account->init(name,nr,balance);
        return true;




}