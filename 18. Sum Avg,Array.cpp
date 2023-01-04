#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int n,i,sum=0;
    cout<<"Enter the numbers of students = ";
    cin>>n;
    int marks[n];
    for(i=0;i<n;i++)
    {
        cout<<"Marks for student "<<i+1<<" = ";
        cin>>marks[i];
    }
    for(i=0;i<n;i++)
    {
        sum=sum+marks[i];
    }
    cout<<"Total marks = "<<sum<<endl;
    float avg=(float) sum/n;
    cout<<"Avg marks = "<<avg;
    getch();
}
