#include <iostream>
#include <cstring>
using namespace std;

class Student 
{
public :
    int studentID;
    char studentName[25];

    void Addstudent(int studentID,char studentName[])
    {
        this->studentID=studentID;
        strcpy(this->studentName,studentName);
    }
private :
    int creditcard;
public:    
    void addCard(int cridetcard)
    {
        this->creditcard=creditcard;
    }
    void showInf()
    {
        cout <<"\n*************** student information *****************\n"
             <<" student name : "<<studentName <<endl
             <<" student ID   : "<<studentID   <<endl
             <<" student card : "<<creditcard  <<endl
             <<"*******************************************************";
    }
};


int main()
{
    Student mystudent;
    char name[25]={"yahia bensehila "};
    mystudent.Addstudent(4444,name);
    mystudent.addCard(0000);
    cout <<"student name : "<<mystudent.studentName <<" \nstudent ID : "<<mystudent.studentID<<endl;
    mystudent.showInf();
    return 0;
}