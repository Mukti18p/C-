#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        a=i+1;
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=0;j<=i;j++)
        {
                cout<<a;
                a--;
        }
        cout<<endl;
    }
}