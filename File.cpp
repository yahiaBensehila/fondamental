// this is file learn 01/01/2023

#include <iostream>
#include <fstream>
#include <string>
#include "file_class.h"

int main()
{
    

    std::fstream my_file;
    my_file.open("test.txt",std::ios::in |std::ios::app);
    write_to_file(my_file,4);
    
    
    std::cout << "\nend of the program."
              <<std::endl;

    return 0;
}