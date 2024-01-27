#include<iostream>
using namespace std;
int sum(int n)
{
    int ans=0;
    ans=n*(n+1);
    ans/=2;
    return ans;
}
int main()
{
    int n;
    cin>>n;
    cout<<sum(n);
}