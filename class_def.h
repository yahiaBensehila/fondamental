// class definition
//  

#pragma once
#include "class_dec.h"


 void Car:: setnumber()
 		{
			std::cout << "enter the number :" ;
			std::cin >> number; 		
 		}
void Car:: setmodel()

 		{
			std::cout << "enter the model :" ;
			std::cin >> model; 		
 		}
void Car:: setname()
 		{
			std::cout << "enter the name:" ;
			std::cin >> name; 		
 		}
void Car:: getall()
 		{
 			std::cout << "\n **********************************" 
 				  << "\n ..... car :"
 				  << "\n 	name   :" <<name
 				  << "\n 	model  :" <<model
 				  << "\n 	number :" <<number
 				  << "\n ***********************************"
 				  << std::endl ;
 
 		}
void Car:: show()
{
    std::cout << "\n this is definition of the class SHOW outside the class." <<std::endl;

}
void Car::seti()
{
	std::cout <<"just add i =11";
}