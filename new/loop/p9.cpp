#include<iostream>
using namespace std;
int main()
{
        int n;
        cin>>n;
        int sum=0,a=0,b=0;
        a=n;
        while(a!=0)
        {
            b=a%10;
            sum=sum+b;
            a=a/10;
        }
        cout<<sum<<endl;
}
