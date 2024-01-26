#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int c=9;
    int a=0,sum=0;
    a=9;
    for(int i=0;i<n;i++)
    {
        sum=sum+c;
        c=(c*10)+a;
        
    }
    cout<<sum<<endl;
   
}

