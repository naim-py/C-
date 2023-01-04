#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
    int i,j,n,sum=0;

    cout<<"Enter the nubers of students = ";
    cin>>n;
    int marks[n];
    for(i=0; i<n; i++)
    {
        cout<<"Enter the marks for students "<<i+1<<" = ";
        cin>>marks[i];
    }

    for(i=0; i<n; i++)
    {
        sum=sum+marks[i];
    }
    cout<<"Total Sum = "<<sum<<endl;
    float avg=(float) sum/n;

    cout<<"Average = "<<avg;
    cout<<endl;
    int max = marks[0];
    for(i=0; i<n; i++)
    {
        if(max <marks[i])
        {
            max = marks[i];
        }
    }
    cout<<"Maximum = "<<max;
    cout<<endl;
    int min = marks[0];
    for(i=0; i<n; i++)
    {
        if(min >marks[i])
        {
            min = marks[i];
        }
    }
    cout<<"Minimum = "<<min;


    getch();
}
