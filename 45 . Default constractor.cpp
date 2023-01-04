#include<iostream>
#include<conio.h>
using namespace std;

class student
{
    public :
    int id;
    double gpa;

    void display()
    {
        cout<<id<<"  "<<gpa<<endl;
    }

    student(int x,double y)
    {
        id=x;
        gpa=y;
    }
    student()
    {
        cout<<"Default Constractor "<<endl;
    }

};

int main()
{
    student ob;
    student naim(234,4.56);
    naim.display();

    student sahin(434,2.345);
    sahin.display();

    getch();
}


