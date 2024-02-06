#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
   int a[n],d=0,m=-1,s,sum=0;
   cout<<"sum";
   cin>>s;
   for(int i=0;i<n;i++)
   {
    cin>>a[i];
   }
   for(int i=0;i<n;i++)
   {
        for(int j=n-1;j>=i;j--)
        {
            sum=0;
            for(int k=i;k<=j;k++)
            {
                sum=sum+a[k];
            }
            if(sum==s)
            {
                cout<<i<<" "<<j<<endl;
                m=0;
                break;
            }
        }
        if(m==0)
        {
            break;
        }
   }
  
    return 0;
  
}