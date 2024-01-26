#include<iostream>
#include<math.h>
using namespace std;
int main()
{   
    int n;
    cin>>n;
    int a=0,b=0;
    while(n!=0)
    {
        b=n%10;
        a=pow(10,1)*a;
        a=a+b;
        n=n/10;
        
    }
    cout<<a<<endl;
   
    
}