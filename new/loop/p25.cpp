#include<iostream>
using namespace std;
int main()
{
    int i,j;
    int a=1,n=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        a=0;
        for(j=0;j<n-i;j++)
        {
            cout<<" ";
        }
            for(j=0;j<2*i+1;j++)
            {
                if(j<=i)
                {
                    a++;
                    cout<<a;
                    
                }
                else{
                    a--;
                    cout<<a;
                }
            }
            cout<<endl;
    }
}