#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y>>z;
    if((x>0 && y>0) || (x>0 && z>0) || (y>0 && z>0))
    {
        if(x%10==y%10 || y%10==z%10 || z%10==x%10)
        {
            cout<<1;
        }
        else
        {
            cout<<0;
        }
    }

}