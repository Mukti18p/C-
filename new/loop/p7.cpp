#include<iostream>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;

    for(int i=n;i>1;i--)
    {
        c=0;
        for(int j=i-1;j>1;j--)
        {
            if(i%j==0)
            {
                c=1;
                break;
            }
            else{
                c=0;
                continue;
            }
        }
        if(c==0)
        {
            cout<<"num is "<<i<<endl;
            i=2;
        }
    }
}