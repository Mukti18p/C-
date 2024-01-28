#include<iostream>
using namespace std;
int sort(int n,int arr[])
{
    int i;
    int max=-1;
    for(i=0;i<n;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[j]<arr[i])
            {
                max=arr[j];
                arr[j]=arr[i];
                arr[i]=max;
            }
        }
    }
    return 0;
}
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(n,arr);
    int k;
    cout<<"enter k ele";
    cin>>k;
    cout<<arr[k-1];
}