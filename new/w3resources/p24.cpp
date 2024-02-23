#include<iostream>
#include<cstring>
using namespace std;
int count(int a)
{
    int b=0;
    while(a!=0)
    {
        b++;
        a=a/10;
    }
    return b;
}
int fun(int x,int y)
{
    x=(x<0)?-x:x;
    y=(y<0)?-y:y;
    int z=x+y,p,r;
    p=count(x);
    r=count(z);
    if(r>p)
    {
        return x;
    }
    else
    {
        return z;
    }
}
int main()
{
    int x,y;
    cin>>x>>y;
   
    cout<<fun(x,y);

}