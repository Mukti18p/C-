#include<iostream>
using namespace std;
int fact(int a)
{
    int j=1;
    for(int i=a;i>=1;i--)
    {
        j=j*i;
    }
    return j;
}
int main()
{
    int n,a,b,c;
    cin>>n;
    float d=0;
    for(int i=0;i<n;i++)
    {
        d=0;
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
            a=fact(i);
            b=fact(j);
            c=fact(i-j);
            if(b==0  || c==0)
            {
                d=1;
            }
            else
            {
            d=(float)a/(b*c);
            }
            cout<<d;
            cout<<" ";
        }
        cout<<endl;
    }
}