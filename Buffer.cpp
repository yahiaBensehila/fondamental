// C++ Code that demonstrates the importance of clearing input buffer that can result in unwanted outputs
//import the necessary libraries
#include<iostream>
#include<vector>
using namespace std;
//main method
int main(int argc, char **argv)
{
//declare an integer variable
int num;
//declare a character variable
char c[20];
// Take input from the user
cin >> num;
cin.ignore()
// Take another input from the user that is of character type
cin.getline(c,20);
// Print the number that is given as input
cout <<"\n------------------------------------\n  ";
cout << num << endl;
// Print the character that is given as input
cout << c << endl;

return 0;
}