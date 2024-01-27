#include<iostream>
using namespace std;
int main()
{
    int n,a=0;
    cin>>n;
    for(int i=n;i>=1;i--)
    {
        a=0;
        for(int j=0;j<n-i;j++)
        {
            cout<<" ";
        }
        for(int j=i;j>=1;j--)
        {
            a++;
            cout<<a;
        }
        cout<<endl;
    }
}