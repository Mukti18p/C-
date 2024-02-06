#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,m;
    cin>>n>>m;
    int a[n][m],count=0,b=1;
    int i,j;
    int tr=n-1,tc=m-1,lr=0,lc=0;
    while(count!=(n*m))
    {
        if(count!=(n*m))
        {
            for(i=lc;i<=tc;i++)
            {
                a[lr][i]=b;
                b+=2;
                count++;
            }
           
            lr++;
        }
        if(count!=(n*m))
        {
            for(i=lr;i<=tr;i++)
            {
                a[i][tc]=b;
                b+=2;
                count++;
            }
            
            tc--;
        }
        if(count!=(n*m))
        {
            for(i=tc;i>=lc;i--)
            {
                a[tr][i]=b;
                b+=2;
                count++;
            }
            
            tr--;
        }
        if(count!=(n*m))
        {
            for(i=lc;i<=tc;i++)
            {
                a[tr][i]=b;
                b+=2;
                count++;
            }
          

            lc++;
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            cout<<a[i][j]<<"   ";
        }
        cout<<"\n";
    }
}