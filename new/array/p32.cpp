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
       int sum=0,sum1=0;
       for(int i=0;i<n;i++)
       {
        sum=0;
        sum1=0;
        for(int j=0;j<i;j++)
        {
            sum=sum+a[j];
        }
        for(int j=i+1;j<n;j++)
        {
            sum1=sum1+a[j];
        }
        if(sum==sum1)
        {
            cout<<"At index i the sum of previous ele and sum of  the rest all elements are same at index "<<i<<endl;
        }
       }
}