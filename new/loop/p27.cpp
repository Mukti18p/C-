#include<iostream>
using namespace std;
int main()
{
    int n,b=0;
    cin>>n;
    for(int i=1;i<=n;i++)
    {
        b=i-1;
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=1;j<=2*i-1;j++)
        {
            if(j<=i)
            {
                b++;
                cout<<b;
            }
            else{
                b--;
                cout<<b;
            }
        }
        cout<<endl;
    }
}