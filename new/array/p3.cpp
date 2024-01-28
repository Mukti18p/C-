#include<iostream>
using namespace std;
int secondlarge(int n,int arr[])
{
    int m=0,fm=-1,sm=-2;
            for(int i=0;i<n;i++)
            {
                    if(m<arr[i])
                    {
                        fm=m;
                        m=arr[i];
                    }
                    else if(fm!=m && fm<arr[i])
                    {
                            sm=fm;
                            fm=arr[i];
                    }
                    else if(sm!=fm && sm<arr[i])
                    {
                        sm=arr[i];
                    }
            }
            cout<<sm<<""<<fm<<""<<m;
}
int main()
{
    int i,n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    secondlarge(n,arr);
}