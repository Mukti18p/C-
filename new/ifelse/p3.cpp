#include<iostream>
using namespace std;

int main()
{
    int marks;
    cin>>marks;

    if(marks<=25)
    {
        cout<<"F";
    }
    else if(marks<=45 && marks > 25)
    {
        cout<<"E";
    }
    else if(marks > 45 && marks<=50)
    {
        cout<<"D";
    }
    else if(marks<=60 && marks >50)
    {
        cout<<"C";
    }
    else if(marks<=80 && marks >60)
    {
        cout<<"B";
    }
    else if(marks>80)
    {
        cout<<"A";
    }
}

