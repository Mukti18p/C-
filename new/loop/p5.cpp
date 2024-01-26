#include<iostream>
using namespace std;
int main()
{
    int n,c=1,count=0;
    cin>>n;

    for(int i=2;i<=n;i++)
    {
        for(int j=2;j<i;j++)
        {
                if(i%j==0)
                {
                    c=0;
                    break;
                }
                else{
                    c=1;
                    continue;
                }
        }
        if(c==1)
        {
            count++;
            cout<<i<<endl;
        }
        c=1;
    }
    cout<<count<<endl;
}