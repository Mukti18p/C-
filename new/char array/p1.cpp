#include<iostream>

using namespace std;

int main()
{
    char a[100];
    cin>>a;

    cout<<a;
    int i,j=0;
    i=0;
    int n=0;
    while(a[n]!='\0')
    {
        n++;
    }
    j=n-1;
    int count=0;
    while(i<=j)
    {
       if(a[i]==a[j])
       {
        count=1;
        continue;
       }
       else
       {
        count=2;
        break;
       }
    }
    if(count==2)
    {
        cout<<"not palindrome";
        
    }
    else
    {
        cout<<"palin drome";
    }

   
}