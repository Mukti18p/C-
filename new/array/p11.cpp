#include"bits/stdc++.h"
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0;
    int a[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        sum=0;
        for(int j=i;j<n;j++)
        {
            sum=sum+a[j];
        }
        cout<<sum<<endl;
    }

}