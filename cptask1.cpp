#include <iostream>
using namespace std;
void equal(int number1,int  number2);
main()
{
int number1;
int number2;
cout<< "enter the number1" <<endl;
cin>> number1 ;
cout<< "enter the number2" <<endl;
cin>> number2 ;
equal(number1 , number2);
}
void equal(int number1 , int number2) 
{
if(number1==number2)
{
cout<<"true";
}
if (number1!=number2)
{
cout<< "false" ;
}
}


 