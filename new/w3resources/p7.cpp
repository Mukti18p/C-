#include<iostream>
#include<string>
using namespace std;
int fun(int num,int num1)
{
    int dif=100-num;
    int diff=100-num1;
    if(dif<0)
    {
        dif=-dif;
    }
    if(diff<0)
    {
        diff=-diff;
    }
    if(dif<diff)
    {
        return num;
    }
    else
    {
        return num1;
    }
}
int main()
{
    int num,num1;
    cin>>num>>num1;
    int a=fun(num,num1);
    cout<<a<<endl;

}    
