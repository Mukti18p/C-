#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int *temp=0;
    *temp=*a;
    *a=*b;
    *b=*temp;
}
int main()
{
    int n;
    cin>>n;
    int arr[n],brr[n],k=0;
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        if(i==0)
        {
            brr[k]=arr[i]*arr[i+1];
        }
        else if(i==n-1)
        {
            brr[k]=arr[i]*arr[i-1];
        }
        else
        {
            brr[k]=arr[i-1]*arr[i+1];
        }
        k++;
    }
    
    for(i=0;i<k;i++)
    {
        cout<<brr[i]<<" ";
    }
}
