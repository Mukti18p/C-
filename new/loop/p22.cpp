#include<iostream>
using namespace std;
int main()
{
           int i,j,a=1,n,b=0;
           cin>>n;
           for(i=0;i<n;i++)
           {
            if(i%2==0)
            {
                for(j=0;j<=i;j++)
                {
                    if(j%2==0)
                    {
                        cout<<a;
                    }
                    else{
                        cout<<b;
                    }
                    
                }
            }
            else{
                for(j=0;j<=i;j++)
                {
                    if(j%2==0)
                    {
                        cout<<b;
                    }
                    else{
                        cout<<a;
                    }
                }
            }
            cout<<endl;
           }

}