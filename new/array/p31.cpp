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
    int sum=0;
    for(int i=n-1;i>=0;i--)
    {
        sum=0;
        for(int j=i;j>=0;j--)
        {
            sum=sum+a[j];
        }
        a[i]=sum;
        
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
}