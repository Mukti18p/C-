#include<iostream>
using namespace std;
int fibo(int a,int b,int n,int sum)
{
    if(n==0)
    {
        return sum;
    }
    else
    {
   sum=a+b;
    a=b;
    b=sum;
    fibo(a,b,n-1,sum);
    }
}
int main()
{
    
    int a,b;
    a=0,b=1;
    int sum=0,n;
    cin>>n;
   
        sum=fibo(a,b,n,sum);
        cout<<sum;
    
}
// 0 1 2 3 5