#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int n1=0,n2=0,n3=0;
    while(num!=0)
    {
        n1=num%2;
        n2=n2+pow(10,n3)*n1;
        n3++;
        num=num/2;
    }
    cout<<n2;

}