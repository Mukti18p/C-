#include<iostream>
using namespace std;
int search(int n,int arr[],int m)
{
    int s,e;
    s=0;
    e=n;
    while(s<=e)
    {
        int mid=(s+e)/2;
        if(arr[mid]==m)
        {
            return mid;
        }
        else if(arr[mid]>m)
        {
            e=mid-1;
        }
        else
        {
            s=mid+1;
        }
    }
    return -1;
}
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int m;
    cout<<"enter the number\n";
    cin>>m;
    cout<<search(n,arr,m);
}