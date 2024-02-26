#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n],temp=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int *p,*q;
    p=&a[0];
   
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(p[i]>p[j])
            {
                temp=p[i];
                p[i]=p[j];
                p[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    return 0;

}