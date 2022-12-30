#include <iostream>


class Car {
 	private :
 		int number;
 		char model[8];
 		char name[8];
 	
 	public :
 		void setnumber()
 		{
			std::cout << "enter the number :" ;
			std::cin >> number; 		
 		}
 		void setmodel()
 		{
			std::cout << "enter the model :" ;
			std::cin >> model; 		
 		}
 		void setname()
 		{
			std::cout << "enter the name:" ;
			std::cin >> name; 		
 		}
 		void getall()
 		{
 			std::cout << "\n **********************************" 
 				  << "\n ..... car :"
 				  << "\n 	name   :" <<name
 				  << "\n 	model  :" <<model
 				  << "\n 	number :" <<number
 				  << "\n ***********************************"
 				  << std::endl ;
 
 		}
        void show();
};
void Car :: show()
{
    std::cout << "\n this is definition of the class SHOW outside the class." <<std::endl;

}