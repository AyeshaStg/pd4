#include <iostream>
using namespace std;
void ticket(string , int);
main()
{
string name ;
int originalprice ;
cout<< "enter name" <<endl;
cin>> name;
cout<< "enter originalprice" ;
cin>> originalprice ;
ticket(name , originalprice) ;
}
void ticket(string name , int originalprice)
{
int totaldiscount;
int discountedprice ;
totaldiscount=originalprice * 0.05 ;
discountedprice= originalprice-totaldiscount;
if (name=="pakistan")
{
cout<< discountedprice ; 
}
totaldiscount=originalprice * 0.1 ;
discountedprice= originalprice-totaldiscount;
if (name=="ireland")
{
cout<< discountedprice ;
}
totaldiscount=originalprice *0.3 ;
discountedprice= originalprice-totaldiscount;
if (name=="india")
{
cout<< discountedprice ;
}
totaldiscount=originalprice * 0.45;
discountedprice= originalprice-totaldiscount;
if (name=="canada")
{
cout<< discountedprice ;
}
totaldiscount=originalprice * 0.3 ;
discountedprice= originalprice-totaldiscount;
if (name=="england")
{
cout<< discountedprice ;
}
}
