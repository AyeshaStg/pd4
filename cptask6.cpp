#include <iostream>
using namespace std;
void maximum(int , int);
main()
{
int hours;
int minutes;
cout<< "Enter the number of hours: "  <<endl;
cin>> hours ;
cout<< "Enter the number of minutes: "<<endl;
cin>> minutes ;
maximum(hours , minutes);
}
void maximum(int hours ,int minutes)
{
int hours_to_minutes;
hours_to_minutes=hours*60 ;
if(hours_to_minutes>minutes)
{
 cout<< hours ;
}
if(hours_to_minutes<minutes)
{
 cout<< minutes ;
}}