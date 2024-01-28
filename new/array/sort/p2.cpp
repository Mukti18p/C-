#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n];
    int i;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=1;i<n;i++)
    {
        int m=arr[i];
        int s=i-1;
        while(m<arr[s] && s>=0)
        {
            arr[s+1]=arr[s];
            s--;
        }
        arr[s+1]=m;
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}