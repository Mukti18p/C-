#include<iostream>
using namespace std;
int main()
{
    int i,j,n;
    cin>>n;
    char a=64;
    for(i=0;i<n;i++)
    {
        a=64;
        for(j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(j=0;j<2*i+1;j++)
        {
                if(j<=i)
                {
                    a++;
                    cout<<a;
                }
                else{
                    a--;
                    cout<<a;
                }
        }
        cout<<endl;
    }
}