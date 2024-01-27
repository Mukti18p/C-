#include<iostream>
#include<math.h>

using namespace std;
int main()
{
    int n,b=0,a=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a=-1;
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<2*i+1;j++)
        {
              if(j<=i)
              {
                a++;
                b=pow(2,a);
                cout<<b;
              }
              else{
                a--;
                b=pow(2,a);
                cout<<b;
              }
        }
        cout<<endl;
    }
}    