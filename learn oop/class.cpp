#include <iostream>
#include <string>


class Student 
{
private :
    std::string name;
    int id;
    int classe;
public :
Student()
{
    std::cout <<"\ncontructor open";
    name="empty";
    id=00000;
    classe=00000;
}
~Student()
{
    std::cout << "\n constructor closed.\n\n";
}
    bool set_name()
    {
        std::cout<<"\n enter the name : ";
        if(!(std::cin>>name)) return false;
        else return true ;
    }
    bool set_id()
    {
        std::cout <<"\n enter the id : ";
        if(!(std::cin>>id)) return false;
        else return true ;
    }
    bool set_classe()
    {
        std::cout << " \n enter the classe :";
        if(!(std::cin>>classe)) return false ;
        else return true ;
    }
    void print()
    {
        
            std::cout <<"\n Name   : " <<name
                      <<"\n id     : " <<id
                      <<"\n classe : " <<classe
                      <<std::endl;
      
    }
};

int main()
{
    Student yahia;
    //yahia.set_name();
    //yahia.set_id();
    //yahia.set_classe();
    yahia.print();
    
    return 0;

}