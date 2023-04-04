//#pragma once
#include <iostream>
#include <fstream>
#include <ctime>
#include <string>

std::fstream&  write_to_file(std::fstream file, int number)
{
    //test if the file open 
    if(!file) std::cerr <<"error opening file name :";
    if(file.is_open())
    {
        // alwayse write in the file current_time 
        time_t current_time =time(NULL);
        file <<"\n" <<" date and time : "<< ctime(&current_time) <<"\n";

        // ask the user what would you want to write 
        std::string line;
        char c;
        std::cout <<"\n what would you want to write :";
        std::getline(std::cin,line,'\n');
        while( c != 'n')
        {
            std::cout <<"\n \t want to continue y/n :";
            std::cin>>c;
            
            std::getline(std::cin,line);
            file<<"\n"<< line<<"\n"; 
        }
        std::cout <<"\nend of writing to fille !\n";
        file.close();


    }
return file;
}