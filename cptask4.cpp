#include <iostream>
using namespace std;
void car(int);
main()
{
int speed ;
cout<< "enter speed" <<endl;
cin>> speed ;
car(speed) ;
}
void car(int speed) 
{
if (speed>100)
{
cout<< "Halt...you will be challenged!!!" ;
}
if (speed<=100)
{
cout<< "Perfect ! you are doing good" ;
}
}