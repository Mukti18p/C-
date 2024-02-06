#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j,b=0,m=0;
    for(j=0;j<n;j++)
    {
        cin>>a[j];
    }
    for(i=0;i<n;i++)
    {
        if((a[i+1]>=a[i]) && (a[i+1]>=a[i+2]))
        {
            b=a[i+1];
            m=max(b,m);
            cout<<m<<endl;
        }
        else
        {
            break;
        }
    }
    cout<<"max is "<<m<<endl;
}