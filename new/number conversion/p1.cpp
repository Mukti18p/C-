#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=0,n1=0,n2=0,sum=0;
    cin>>num;
    while(num!=0)
    {
        n1=num%10;
        sum=sum+pow(2,n2)*n1;
        n2++;
        num/=10;
    }
    cout<<sum<<endl;
    
}

//10110101 // 10101101 
//11001001 //
// 00110110 // 