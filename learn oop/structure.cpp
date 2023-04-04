
#include <iostream>
#include <string>

class university
{
    public :
    std::string name_u=" STH University ";

};

class Student : public  university
{
    public :
    std::string name ;
    int id;
    int Class;

    public :
   
         void add()
    {
        std::cout << "\n enter the name : ";
        std::cin >>this->name;
        std::cout << "\n enter the ID : ";
        std::cin >>this->id;
        std::cout <<"\n enter the class :";
        std::cin >>this->Class;
    }
    void show()
    {
        std::cout <<" \n Name : "<< this->name 
                  <<" \n Id   : "<<this->id 
                  <<" \n Class: "<<this->Class 
                  <<" \n university : "<<this->name_u <<std::endl;


    }

};


int main ()
{
    Student st;
    st.add();
    st.show();




    return 0;
}