#include<iostream>
using namespace std;
int main()
{
    int n,m=0,max=-1;
    cin>>n;
    int arr[n],fre[n];
    int i,j,index=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        fre[i]=0;
    }
    for(i=0;i<n;i++)
    {
        m=0;
        if(fre[i]!=1)
        {
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                m++;
            }
        }
        if(max<m)
        {
            max=m;
            index=i;
        }
        }
    }
    cout<<arr[index];


}
//1 1 2 3 3 1 1 2 3
//1 -3
//2 -1
//3 -2
