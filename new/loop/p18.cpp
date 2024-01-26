#include<iostream>
using namespace std;
int main()
{
   int x,n;
   cin>>x;
   cin>>n;
   int sum=0,count=1,a=1;
   for(int i=0;i<n;i++)
   {
    a=1;
        for(int j=0;j<count;j++)
        {
            a=a*x;
        }
        count+=2;
        if(i%2==0)
        {
            sum=sum+a;
        }
        else{
            sum=sum-a;
        }
   }
   cout<<sum<<endl;
}