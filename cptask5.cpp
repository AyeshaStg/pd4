#include <iostream>
using namespace std;
void dice(int , int);
main()
{
int num1 ;
int num2 ;
cout<< " enter num1 " ;
cin>> num1 ;
cout<< " enter num2 " ;
cin>> num2 ;
dice( num1 ,  num2) ;
}
void dice(int num1 , int num2)
{
if (num1<num2 & num2-num1<6)
{
cout<< "true" ;
}
if (num1>num2 & num1-num2>6)
{
cout<< "false" ;
}
}