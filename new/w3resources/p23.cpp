#include<iostream>
#include<cstring>
using namespace std;
bool fun(int x,int y)
{
    if((x>=10 && x<=99)&& (y>=10 && y<=99))
    {
        while(x%10 != y%10 && x!=0 && y!=0)
        {
            x=x/10;
            y=y/10;
        }
        if(x==0 || y==0)
        {
            return false;
        }
        else
        {
            return true;
        }
    }
    else
    {
        return false;
    }
}
int main()
{
    int x,y,z;
    cin>>x>>y;
   
    cout<<fun(x,y);

}