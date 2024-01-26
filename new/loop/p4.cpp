#include<iostream>
using namespace std;
int main()
{
     int n;
     n=500;
     int a=0;

     for(int i=1;i<=n;i++)
     {
        a=0;
            for(int j=1;j<i;j++)
            {
                if(i%j==0)
                {
                    a=a+j;
                }
            }
            if(a==i)
            {
                cout<<i<<endl;
            }
     }
}