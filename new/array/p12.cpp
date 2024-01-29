#include"bits/stdc++.h"
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int sum=0,m=0,fm=0;
    int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        fm=a[i+1]-a[i];
        b[m]=fm;
        m++;

    }
    

}