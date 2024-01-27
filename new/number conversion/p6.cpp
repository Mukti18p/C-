#include<iostream>
#include<math.h>
using namespace std;
int fun(int num)
{
    int n1=0,n2=0,count=0;
    while(num!=0)
    {
        n1=num%8;
        n2=n2+pow(10,count)*n1;
        count++;
        num=num/8;
    }
    return n2;
}
int main()
{
    int num;
    cin>>num;
   
    cout<< fun(num);
}