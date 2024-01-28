#include<iostream>
using namespace std;
int main()
{
    int i,j,n,max=-1;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
         for(j=i;j<n;j++)
         {
            if(arr[i]<arr[j])
            {
                cout<<arr[i]<<":"<<arr[j]<<endl;
                break;
            }
            else
            {
                continue;
            }
         }
    }

}