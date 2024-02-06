#include<iostream>
#include<algorithm>
using namespace std;
int kadence(int n,int a[])
{
    int currsum=0,maxsum=-10000;
    for(int i=0;i<n;i++)
    {
        currsum+=a[i];
        if(currsum<0)
        {
            currsum=0;
        }
        maxsum=max(maxsum,currsum);
    }
    return maxsum;
}
int main()
{
    int n;
    cin>>n;
   int a[n],wrapsum=0,nonwrapsum=0,maxsum=0,totalsum=0;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   nonwrapsum=kadence(n,a);
   for(int i=0;i<n;i++)
   {
    totalsum+=a[i];
        a[i]=-a[i];
   }
   wrapsum=totalsum+kadence(n,a);
   cout<<max(wrapsum,nonwrapsum);
    return 0;
  
}
//max subarray sum = total sum of array - non contributing elems sum