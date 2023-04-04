// c++ program to find current day,date
// and local time

#include <iostream>
#include <ctime>
#include <string>

double vals[] ={34.4,55.5,66.6 ,77.88};
double setvalues(int i)
{
        vals[i]=44;
        return vals[i];

}

int main()
{

std::cout << "\n ****************** value befor change ***************\n"<<std::endl;
for (int i=0;i<4;i++)
{
        std::cout <<"vals [ "<<i<<" ]="<<vals[i]<<"\n";
}
setvalues(1);
setvalues(3);
std::cout << "\n ------------------- value after change --------------\n"<<std::endl;
for (int i=0;i<4;i++)
{
        std::cout <<"vals [ "<<i<<" ]="<<vals[i]<<"\n";
}


return 0;
}