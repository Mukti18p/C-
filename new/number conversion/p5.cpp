#include<iostream>
#include<string.h>
#include<math.h>

using namespace std;

int main()
{
    char b[8];
    cin>>b;
    int n1=0,n2=0,i=2,count=0;
    while(b[i]!='\0')
    {
       i++;
    }
    i--;
    while(b[i]!='x')
    {
         
        if(b[i]>=65)
        {
            n1=b[i]-'7';
        }
        else{
                n1=b[i]-'0';
        }
       
        n2=n2+pow(16,count)*n1;
        count++;
        i--;
    }

   cout<<n2;
}