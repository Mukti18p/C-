#include<iostream>
using namespace std;
int main()
{
    int a[3]={1,2,2};
    int i,j,k;
    int sum=0;
    for(i=0;i<3;i++)
    {
        for(j=2;j>=i;j--)
        {
            sum=0;
            for(k=j;k>=i;k--)
            {
                sum=sum+a[k];
            }
            cout<<sum<<endl;
        }

    }
  
}