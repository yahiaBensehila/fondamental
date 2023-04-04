// class.h 
// class declaration


#include <iostream>


class Car {
 	private :
 		int number;
 		char model[8];
 		char name[8];
		int i;
 	
 	public :
 		void setnumber();
 		
 		void setmodel();
 		
 		void setname();

		void seti();
 		
 		void getall();
 		
        void show();
};
