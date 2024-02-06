#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int i,j=2,curr=2,ans=2,pd=0;
    for(i=0;i<n;i++)
    {
        cin>>a[i];
    }
    pd=a[1]-a[0];
    while(j<n)
    {
        if(pd==a[j]-a[j-1])
        {
            curr++;

        }
        else
        {
            pd=a[j]-a[j-1];
            curr=2;
        }
        ans=max(ans,curr);
        j++;
    }
    cout<<ans<<endl;

}