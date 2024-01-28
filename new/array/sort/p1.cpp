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
    int arr[n];
    int i=0,j=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-1-i;j++)
        {
            if(arr[j]>arr[j+1])
            {
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
       
            cout<<arr[i]<<" ";
            
    }
}
//binary search