#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int a=0,b=1;
    cout<<sum<<endl;
    cout<<sum<<endl;
    for(int i=0;i<n-2;i++)
    {
        sum=a+b;
        a=b;
        b=sum;
        cout<<sum<<endl;
    }
    
   
}