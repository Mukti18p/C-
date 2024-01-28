
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int i;
    int a[n];
    int mx=-1999;
    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }
    for(i=0;i<n;i++)
    {
        mx=max(mx,a[i]);
        
    }

    cout<<mx<<endl;
    
}
