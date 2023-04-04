

%:include <iostream>

int main()
<%
std::cout <<"--------------\
fjjjjjjjjjjjjjjjjjjjjjjjjjjjjjff";
    int y(554);
    &y;
    int *ptr;
    ptr=&y;

    std::cout <<" y="<<y<<std::endl
              <<"&y="<<&y<<std::endl
              <<"l'address de ptr --> &ptr :"<<&ptr<<std::endl
              <<"la valeur de ptr --> ptr  :"<<ptr<<std::endl
              <<"le contenu de prt --> *ptr :"<<*ptr<<std::endl;

// creation pointer  by the function new.
// int* ptr_new=new int;
    std::cout<<"\n---------------------------------------------\n";
    int* ptr_new=new int;
    *ptr_new=0;
    
     std::cout<<"l'address de ptr --> &ptr_new :"<<&ptr_new<<std::endl
              <<"la valeur de ptr --> ptr_new  :"<<ptr_new<<std::endl
              <<"le contenu de prt --> *ptr_new :"<<*ptr_new<<std::endl;
    delete ptr_new;

    return 0;
%>