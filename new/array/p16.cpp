#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a[n],d=0,m=-1;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
        for(int j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
            {
                cout<<a[i]<<endl;
                d=1;
                break;
            }
        }
        if(d==1)
        {
            break;
        }

   }
   return 0;
  
}