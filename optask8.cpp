#include <iostream>
using namespace std;
void system();
void ecat(int, int, string, string);
void aggregate(int, int, int, int, int, int);
main()
{
string name1;
string name2;
int matric1;
int matric2;
int inter1;
int inter2;
int ecat1;
int ecat2;
cout<<"Enter name of student1:"<<endl;
cin>> name1 ;
cout<<"Enter name of student2:"<<endl;
cin>> name1;
cout<<"Enter matric marks of student1:"<<endl;
cin>> matric1 ;
cout<<"Enter matric marks of student2:"<<endl;
cin>> matric2;
cout<<"Enter inter marks of student1:"<<endl;
cin>> inter1;
cout<<"Enter inter marks of student2:"<<endl;
cin>> inter2 ;
cout<<"Enter ecat marks of student1:"<<endl;
cin>> ecat1;
cout<<"Enter ecat marks of student2:"<<endl;
cin>> ecat2;
aggregate(matric1, matric2, inter1, inter2, ecat1, ecat2);
ecat(ecat1, ecat2, name1, name2);

}
void system()
{
cout<< "  # # ###  ### # # ### ##     ##  ###  ###  # #         #  ##  # # ###  ##  ## ###  #  ###     "<<endl;
cout<< "  # # # #   #  # # #   # #  #      #    #   # #        # # # # ###  #  #   #    #  # # # #     "<<endl;
cout<< "  # # # #   #  # # ##  ##     #    #    #    #         ### # # ###  #   #   #   #  # # # #     "<<endl;
cout<< "  # # # #   #  # # #   # #     #   #    #    #         # # # # # #  #    #   #  #  # # # #     "<<endl;
cout<< "  ### # #  ###  #  ### # #   ##   ###   #    #         # # ##  # # ### ##  ##  ###  #  # #     "<<endl;
                                                                                              
cout<< "  # #   #   ###  #     ##  ### # # ### ### ###          ## # #  ## ### ### # #                 "<<endl;
cout<< "  ###  # #  # # # #   #    #   ### #   # #  #          #   # # #    #  #   ###                 "<<endl;
cout<< "  ###  ###  # # ###   # #  ##  ### ##  # #  #           #   #   #   #  ##  ###                 "<<endl;
cout<< "  # #  # #  # # # #   # #  #   # # #   # #  #            #  #    #  #  #   # #                 "<<endl;
cout<< "  # #  # #  # # # #    ##  ### # # ### # #  #          ##   #  ##   #  ### # #                 "<<endl;
}
void aggregate(int matric1, int matric2, int inter1, int inter2, int ecat1, int ecat2)
{
float aggregate1;
float aggregate2;
aggregate1=(matric1 / 1100) * 30 + (inter1 / 550) * 30 + (ecat1/ 400) * 40 ;
aggregate2=(matric2 / 1100) * 30 + (inter2 / 550) * 30 + (ecat2 / 400) * 40 ;
cout<<"aggregate of student1: "<<aggregate1 <<endl;
cout<<"aggregate of student2: "<<aggregate2 <<endl;
}
void ecat(int ecat1, int ecat2, string name1, string name2)
{
if(ecat1 > ecat2)
{
cout<< "rollno1==name1";
}
if(ecat1< ecat2)
{
cout<< "rollno1==name_two";
}
}

