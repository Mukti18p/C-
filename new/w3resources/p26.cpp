#include<iostream>
#include<cstring>
using namespace std;
int fun(int x,int y,int z)
{
    if(y-x==z-y)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    cout<<fun(x,y,z);
}