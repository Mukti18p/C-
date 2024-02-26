#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    int k,flag=-1;
    cin>>k;
    for(int i=0;i<k;i++)
    {
        for(int i=0;i<n;i++ )
        {
           if(i==0)
            {
               flag=a[i];
            }
            else
            {
                a[i-1]=a[i];
            }
        } 
        a[n-1]=flag;       
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }

}