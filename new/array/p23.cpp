#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[n],flag=0;
    int brr[n]={0},j;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        flag=0;
        if(brr[i]!=-1)
        {
        for(j=0;j<n;j++)
        {
            if(j!=i && arr[j]==arr[i])
            {
                flag=1;
                brr[j]=-1;
            }
        }
        if(j==n && flag==0)
        {
            cout<<"unique num is "<<arr[i]<<endl;
        }
        
        }
    }
}