#include <iostream>


int main()
{
std::cout <<" the day of 1 st juniory :"<<std::endl;
char day_n[]={'S','S','M','T','W','T','F'};
int  day[6][6];

    int d=1;
    for(int j=0;j<7;j++)
    {
        std::cout <<day_n[j]<<"\t";
    }
    std::cout<<"\n";
    int f;
    std::cout<< "\n set the first day in month :";
    std::cin>>f;
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
        {
            day[i][j]=d;
            d++;
        }
    }
    int o=0;
    for (int i=0;i<6;i++)
    {
        for (int j=0;j<6;j++)
        {
            goto(3,6);
            while(i==0)
            {
                std::cout<<"\t";
                j++;
                if(j==f) break;
            }
            std::cout<<day[i][j]<<"\t";
            
        }
        std::cout<<"\n";
    }

    std::cout<<"\n\n";
    return 0;
}