#include<iostream>
using namespace std;
int main()
{
    int x,n;
    cin>>x;
    cin>>n;
    float c=1,b=1,sum=0;
    for(int i=0;i<n;i++)
    {
        c=1;
        b=1;
        for(int j=1;j<=2*i;j++)
        {
            c=c*x;
             b=b*j;
        }
        if(i%2==0)
        {
            sum=sum+(c/b);
        }
        else{
            sum=sum-(c/b);
        }
    }
    cout<<sum<<endl;
}