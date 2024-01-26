#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
  
    float a=0,b=1,c=0;
    for(int i=1;i<n;i++)
    {
        b=1;
        a=i;
        for(int j=1;j<=i;j++)
        {
                b=b*a;
        }
        b=1/b;
        c=c+b;
    }
    cout<<c<<endl;
}