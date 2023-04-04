// fibonatcci numbers 
// in this program we will calculate the first 20 numbers offibonatcci series

#include <iostream>
#include <iomanip>
#include <string>

int main ()
{
    // declaration of array of 20 element 
    // if the array depasse 1kbyte we should declare the array global or static
    static int fibo[20]={0,1};

    for (int i=1;i<20;i++)
    {
        fibo[i+1]=fibo[i]+fibo[i-1];
    }
    for (int i=0;i<20;i++)
    {
        std::cout <<"\t"<<fibo[i];

    }   
    
std::cout<<std::endl;
    return 0;
}