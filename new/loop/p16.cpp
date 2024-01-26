#include<iostream>
using namespace std;
int main()
{
   int n;
   cin>>n;
 
   float j=0,sum=0;
   for(int i=1;i<=n;i++)
   {

        j=(1/(float)i);
        sum=sum+j;
   }
   cout<<sum<<endl;
  
}

