#include <iostream>
using namespace std;
void pet(int);
main()
{
int Holidays;
cout<< "Holidays: " <<endl;
cin>> Holidays ;
pet( Holidays);
}
void pet(int Holidays)
{
int workingdays;
int play_time;
int difference;
int time_in_minutes;
int time_in_hours;
workingdays=365-Holidays ;
play_time=Holidays*127 +workingdays*63 ;
if (play_time>30000)
{
difference= play_time-30000 ;
time_in_hours=difference/60 ;
time_in_minutes=difference%60 ;
cout<< "Tom will run away" <<endl;
cout<<time_in_hours<<"hours and " <<time_in_minutes<<" minutes for play" ;
}
if (play_time<30000)
{
difference=30000-play_time ;
time_in_hours=difference/60 ;
time_in_minutes=difference%60 ;
cout<< "Tom sleep well" <<endl;
cout<<time_in_hours<<"hours and " <<time_in_minutes<<" minutes less for play"  ;
}
}