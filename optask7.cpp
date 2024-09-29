#include <iostream>
#include <windows.h>
using namespace std;
void printmaze();
void gotoxy(int, int);
void moveplayer(int, int);

main()
{ 
   int x = 3, y = 3;
   system ("cls");
   printmaze();
   while(true)
    {
          moveplayer(x, y);
          y=y+1;
         if(y==21)
         {
          while(true)
         {
         moveplayer(x,y);
           y=y-1;
           if(y==3)
        {
          break;
         }
          }   
          
     }
}
}

void moveplayer(int x, int y)
{
          gotoxy(x,y);
          cout<<"p" ;
          Sleep(500);
          gotoxy(x,y);
          cout<< " " ;
}

void printmaze()
{
cout<<" ##################################################"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" #                                                #"<<endl;
cout<<" ##################################################"<<endl;
} 

void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates. X = x;
 coordinates. Y = y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coordinates);
}




