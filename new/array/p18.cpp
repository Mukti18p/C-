#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a[n],b=-1000,c=0;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
       c+=a[i];
       if(c<0)
       {
        c=0;
       }
       b=max(b,c);
   }
   std::cout<<b;
    return 0;
  
}