// creat a file txt with this program ....

#include <iostream>
#include <string>
#include <fstream>

struct Piza
{ 
    public:
        std::string name;
        float price;
};

std::string header = 
"\n******************* create file ****************\n";


    Piza table_piza [4]={ 
                          {"miga      ",40.000f},
                          {"mergez    ",25.000f},
                          {"viand     ",30.000f},
                          {"champinion",35.000f}
                        };

int main ()
{   
    std::string name;
    std::string line;
    header;
    time_t current_time=time(NULL);
    //std::cout <<"enter the file name with the full path ";
    //std::getline(std::cin,name,'\n');

    std::fstream file;
    
    file.open("test.txt",std::ios::in|std::ios::app);
    if(!file) std::cerr <<"\n error creating file \n ";
    if(file.is_open())
             {
                file <<"\n"<< ctime(&current_time)<<"\n";
               
                for (int i=0;i<4;i++)
                { 
                    file <<table_piza[i].name <<"\t "<<table_piza[i].price<<"\n";
                    //file<<list_name <<"\t"<<list_price <<"\n";

                }
               

             }
    file.close();

    file.open("test.txt");
    if(file.is_open())
    {
        while(getline(file,line ))
        {
            std::cout <<"\n "<<line<<std::endl;
        }
      std::cout <<"\n end of reading file ! \n\n"; 
    }
    file.close();

    return 0;
}