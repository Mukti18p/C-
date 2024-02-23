#include<iostream>
#include<cstring>
using namespace std;
int fun(int x,int y,int z)
{
    if(x==y)
    {
        return z;
    }
    else if(y==z)
    {
        return x;
    }
    else if(x==z)
    {
        return y;
    }
    else
    {
        return x+y+z;
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<fun(x,y,z);

}