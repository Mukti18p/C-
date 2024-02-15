#include<iostream>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int arr[n];
        int i,j;
        for(i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int t=0,temp=0;
        for(i=0;i<n;i++)
        {
            if(arr[i]%2==0)
            {
                for(j=0;j<n;j++)
                {
                    if(arr[j]%2==1)
                    {
                        temp=arr[i];
                        arr[i]=arr[j];
                        arr[j]=temp;
                        break;
                    }
                }
            }
        }
        for(i=0;i<n;i++)
        {
            cout<<arr[i]<<" ";
        }
}