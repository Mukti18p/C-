#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int x,y,z;
    cin>>x>>y;
    
    if(x==y)
    {
        z=0;
        cout<<z;
    }
    else if(x%7==y%7)
    {
        z=(x<y)?x:y;
        cout<<z;
    }
    else
    {
        z=(x>y)?x:y;
        cout<<z;
    }

}