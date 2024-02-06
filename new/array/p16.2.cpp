#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a[n],m=101,b[100],index=0;;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<100;i++)
   {
       b[i]=-1;
   }
   for(int i=0;i<n;i++)
   {
        if(b[a[i]] != -1)
        {
            index=b[a[i]];
        }
        else
        {
            b[a[i]]=i;
        }
        m=min(m,index);
   }
   cout<<m+1<<endl;
    return 0;
  
}