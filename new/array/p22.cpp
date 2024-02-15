#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int n;
    cin>>n;
    int arr[n];
    int brr[n]={0};
    int sum,t=0;
    cin>>sum;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            for(int k=i+2;k<n;k++)
            {
                if(arr[i]+arr[j]+arr[k]==sum && (brr[j]==0 || brr[k]==0))
                {
                    brr[j]++;
                    brr[k]++;
                    t++;
                }
            }
        }
    }
    cout<<t;

}