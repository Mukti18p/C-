#include<iostream>
using namespace std;
int main()
{
    int n,a=0,b=0;
    cin>>n;
     a=n%10;
    while(n!=0)
    {
        b=n%10;
        n=n/10;
    }
    cout<<a+b<<endl;
    }
