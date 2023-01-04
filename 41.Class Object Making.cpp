#include<iostream>
#include<conio.h>
using namespace std;

class Student
{
    public :
    int id;
    double gpa;
};

int main()
{
    Student shahin,naim;

    shahin.id=1204;
    shahin.gpa=3.75;
    cout<<" "<<shahin.id<<"  "<<shahin.gpa<<endl;

    naim.id=1207;
    naim.gpa=3.85;
    cout<<" "<<naim.id<<"  "<<naim.gpa<<endl;


    getch();

}

