#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a[n+1],b=0,m=-1;
   a[n]=-1;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   m=max(m,a[0]);
   for(int i=0;i<n;i++)
   {
        if(a[i]>=m && a[i]>=a[i+1])
        {
                b=a[i];
        }
        m=max(m,a[i]);
   }
   std::cout<<b;
    return 0;
  
}