#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int num=0,count=0;
    cin>>num;
    int n1=0,n2=-1,b[8];
    while(num!=0)
    {
        n1=num/2;
        n2=num%2;
       b[count]=n2;
       count++;
       num=n1;
    }
    count--;
    while(count!=0)
    {
        cout<<b[count];
        count--;
    }
}
//181 //10110101
//181/2 - q- r  -0  //0010
// q/2 - q -r1   -1
//q1 - q2 - r2    -0
// r=0
