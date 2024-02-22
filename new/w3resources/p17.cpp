#include<iostream>
#include<string>
using namespace std;
int main()
{
   int n;
   cin>>n;
   int a[n];
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   int ocrr=0,b=0;
   for(int i=0;i<n-2;i++)
   {
    b=a[i]+1;
    if(b==a[i+1] && b+1==a[i+2])
    {
            ocrr++;
    }
   }
   cout<<ocrr<<endl;
}