#include <iostream>
#include <windows.h>
using namespace std;
void gotoxy(int x, int y);
main()
{    
       system("cls");
       gotoxy(30,10);
       cout<<"        #         "<<endl;
       gotoxy(30,11);
       cout<<"       # #        "<<endl;
       gotoxy(30 ,12);
       cout<<"       ###        "<<endl;
       gotoxy(30,13);
       cout<<"       # #        "<<endl;
       gotoxy(30,14);
       cout<<"       # #        "<<endl;
       gotoxy(45,10);
       cout<< "      # #        "<<endl;
       gotoxy(45,11);
       cout<< "      # #        "<<endl;
       gotoxy(45,12);
       cout<< "       #         "<<endl;
       gotoxy(45,13);
       cout<< "       #         "<<endl;
       gotoxy(45,14);
       cout<< "       #         "<<endl;
       gotoxy(60,10);
       cout<<"       ###        "<<endl;
       gotoxy(60,11);
       cout<<"       #          "<<endl;
       gotoxy(60,12);
       cout<<"       ##         "<<endl;
       gotoxy(60,13);
       cout<<"       #          "<<endl;
       gotoxy(60,14);
       cout<<"       ###        "<<endl;
       gotoxy(75,10);
       cout<<"       ##         "<<endl;
       gotoxy(75,11);
       cout<<"      #           "<<endl;
       gotoxy(75,12);
       cout<<"       #          "<<endl;
       gotoxy(75,13);
       cout<<"        #         "<<endl;
       gotoxy(75,14);
       cout<<"      ##          "<<endl;
       gotoxy(90,10);
       cout<<"       #  #       "<<endl;
       gotoxy(90,11);
       cout<<"       ####       "<<endl;
       gotoxy(90,12);
       cout<<"       ####       "<<endl;
       gotoxy(90,13);
       cout<<"       #  #       "<<endl;
       gotoxy(90,14);
       cout<<"       #  #       "<<endl;
       gotoxy(105,10);
       cout<<"         #        "<<endl;
       gotoxy(105,11);
       cout<<"        # #       "<<endl;
       gotoxy(105,12);
       cout<<"        ###       "<<endl;
       gotoxy(105,13);
       cout<<"        # #       "<<endl;
       gotoxy(105,14);
       cout<<"        # #       "<<endl;
}     
void gotoxy(int x, int y)
{
 COORD coordinates;
 coordinates.X =  x;
 coordinates.Y =  y;
 SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coordinates);
}
