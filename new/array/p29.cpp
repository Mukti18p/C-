#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n,i=0,j=0;
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int *p,*q;
    p=&a[0];
    q=&a[n-1];
    i=0;
    int temp=0;
    j=n-1;
    while(i<=j)
    {
        if(*p%2==1)
        {
            while(*q%2==0)
            {
                q--;
            }
            q--;
            temp=*p;
            *p=*q;
            *q=temp;
            cout<<*p<<endl<<*q<<endl;
        }
        p++;
        i++;
        j--;
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
}    