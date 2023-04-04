// Ref2.cpp
// Demonstrating functions with parameters
// of reference type.
// --------------------------------------------------

#include <iostream>
#include <string>

//function prototypes: getClient & putClient
bool getClient(std::string &a,int &d);
void putClient(const std::string &n,const int &d);


int main()
{
    std::string name;
    int data;
    

   
   if( getClient(name,data)) putClient(name,data);
    else (std::cout <<"invalid data !"<<std::endl);

    return 0;
}

// function definition getClient & putClient


bool getClient(std::string &n,int &d)
{   //use the type bool to know if an error occure no redult will be showen.

    std::cout <<"\n *************** input data ************************\n";
    std::cout <<"enter name : ";
    if(!getline(std::cin,n)) return false;          //getline used to get all characteres included with space, mean no limits for the name
    std::cout <<"Data client: ";
    if(!(std::cin>>d)) return false ;
    std::cout <<"\n *************** Data end. *************************\n";
    return true;
}
// fuction put (show ) the result and useing const to indicate read-only access for the parameters

void putClient(const std::string &n,const int &d)
{
    std::cout <<"\n--------------- Data info -------------------------\n";
    std::cout <<"Client name : "<<n<<std::endl
              <<"Client data : "<<d
              <<"\n--------------- Data end. -------------------------\n";

}