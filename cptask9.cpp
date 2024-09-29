#include <iostream>
using namespace std;
void roll(int , int);
main()
{
int people;
int TP;
cout<< "Number of people in household: " <<endl;
cin>> people ;
cout<< "Number of rolls of TP: " <<endl;
cin>> TP ;
roll( people , TP);
} 
void roll(int people , int TP)
{
int use_per_day ;
int total_tp ;
int days ;
use_per_day=people*57 ;
total_tp =TP*500 ;
days=total_tp/use_per_day ;
if(days<14)
{ 
 cout<< "your TP will only last " <<days<<" days,""buy more!" ;
}
if (days>14)
{
 cout<< "your TP will last " <<days<<" days," "no need to panic!" ;
}
}
