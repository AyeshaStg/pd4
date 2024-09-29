#include <iostream>
using namespace std;
void Flowershop(int,int,int);
main()
{
int Redrose;
int Whiterose;
int Tulips;
cout<< "Red rose: " <<endl;
cin>> Redrose ;
cout<< "White rose:" <<endl;
cin>> Whiterose ;
cout<< "Tulips:" <<endl;
cin>> Tulips ;
Flowershop(Redrose,Whiterose,Tulips);
}
void Flowershop(int Redrose,int Whiterose,int Tulips)
{
float originalprice;
float discountedprice;
float priceafterdiscount;
originalprice= 2 * Redrose + 4.10 * Whiterose + 2.50 * Tulips ;
cout<< "Original Price: $" <<originalprice <<endl;
discountedprice= (20*originalprice)/100 ;
priceafterdiscount= originalprice - discountedprice ;
if (originalprice>200)
{
 cout<< "Price after discount: $"<<priceafterdiscount <<endl;
}
if (originalprice<200)
{
 cout<< "No discount applied." ;
}
}