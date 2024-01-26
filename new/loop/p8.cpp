#include<iostream>
using namespace std;
int main()
{
    int n1,n2;
    cin>>n1;
    cin>>n2;
    int gcd=0,n3=0,max=-1;
    n3=(n1>n2)?n1:n2;
    for(int i=1;i<n3;i++)
    {
        if(n1%i==0 && n2%i==0)
        {
            gcd=i;

        }
        if(max<gcd)
        {
            max=gcd;
        }
    }
    cout<<gcd<<endl;
}