#include<iostream>
using namespace std;
int revrse(int n)
{
    int ans=0;
    while(n>0)
    {
        int ld=n%10;
        ans=ans*10+ld;
        n/=10;
    }
    return ans;
}
int add(int a,int b)
{
    int ans=0;
    int pvc=0;
    while(a>0 && b>0)
    {
        if(a%2==0 && b%2==0)
        {
            ans=ans*10+pvc;
            pvc=0;
        }
        else if ((a%2==0 && b%2==1)||(a%2==1 && b%2==0))
        {
                if(pvc==1)
                {
                    ans=ans*10+0;
                    pvc=1;
                }
                else
                {
                    ans=ans*10+1;
                    pvc=0;
                }
        }
        else
        {
            ans=ans*10+pvc;
            pvc=1;
        }
        a/=10;
        b/=10;
    }
    while(a>0)
    {
        if(pvc==1)
        {
            if(a%2==0)
            {
            ans=ans*10+0;
            pvc=1;
            }
            else{
            ans=ans*10+1;
            pvc=0;
        }
        }
        else{
            ans=ans*10+(a%2);
            a=a/2;
        }
    }
   while(b>0)
    {
        if(pvc=1)
        {
            if(b%2==0)
            {
            ans=ans*10+0;
            pvc=1;
            }
            else{
            ans=ans*10+1;
            pvc=0;
        }
        }
        else{
            ans=ans*10+(b%2);
            a=a/2;
        }
    }
    if(pvc==1 )
    {
        ans=ans*10+1;
    }
    ans=revrse(ans);
    return ans;
}
int main()
{
   int a,b;
   cin>>a>>b;
   cout<<add(a,b);
}
