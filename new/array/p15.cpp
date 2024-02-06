#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a[n],d=0,b=0,c=0,m=-1;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
        for(int j=i;j>=0;j--)
        {
            d=max(d,a[j]);
        }
        for(int j=i;j<n;j++)
        {
            c=max(c,a[j]);
        }
        if(a[i+1]>=d && a[i+1]>=c)
        {
            b=a[i+1];
            m=max(m,b);
        }
        else
        {
            continue;
        }
   }
   std::cout<<m;
    return 0;
  
}