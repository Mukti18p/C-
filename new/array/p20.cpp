#include<iostream>
#include<algorithm>
using namespace std;
bool pairsum(int n,int arr[],int k)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=i;j<n;j++)
        {
            if(arr[i]+arr[j]==k)
            {
                cout<<i<<" "<<j<<endl;
            }
        }
    }
}
int main()
{
    int n=8;
   int arr[]={2,4,7,11,14,16,20,21};
   int k=31;
    pairsum(n,arr,k);
  
}