#include<iostream>
using namespace std;
float fact(int i)
{
    if(i==0 || i==1 || i<0)
    {
        return 1;
    }
    else{
    return i*fact(i-1);
    }
}
int main()
{
    int n,r;
    float a,b,c,d;
    cin>>n>>r;
   if(n-r>0)
   {
   a=fact(n);
   b=fact(r);
   c=fact(n-r);
    d=a/(b*c);
   }
   else{
    cout<<"enter wrong input";
   }
    cout<<d;
}