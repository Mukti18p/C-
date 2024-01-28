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
        for(j=i;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                swap(arr[j],arr[i]);
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i+1]!=arr[i]+1)
        {
            cout<<arr[i]+1<<endl;
            break;
        }
    }
}
//binary search