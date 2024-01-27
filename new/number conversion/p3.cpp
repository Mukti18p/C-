#include <iostream>
#include<math.h>
using namespace std;

int main() {
    int num;
    cin>>num;
    int n2=0,i=0;
    char b[8];
    while(num!=0)
    {
        n2=num%16;
        if(n2>10)
        {
            b[i]=n2+55;
            i++;
        }
        else{
            b[i]=n2+48;
            i++;
        }
        num=num/16;
    }
    cout<<"0x";
    i--;
    for(int j=i;j>=0;j--)
    {
        cout<<b[j];
    }
    
}