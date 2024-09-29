#include <iostream>
using namespace std;
void result(string );
main()
{
string input;
cout<< "enter input" <<endl;
cin>> input ;
result(input) ;
}
void result(string input)
{
if (input=="true")
{
cout<< "false" ;
}
if (input=="false")
{
cout<< "true";
}
}