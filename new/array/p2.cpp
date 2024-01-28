#include<iostream>
using namespace std;
void max(int n,int arr[])
{
    int m=0,tm=-2,fm=-1;
        for(int i=0;i<n;i++)
        {
                if(m<arr[i] && fm!=m && tm!=fm)
                {
                        tm=fm;
                        fm=m;
                        m=arr[i];
                }
                
        }
        cout<<m<<" "<<fm<<" "<<tm<<"\n";
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
    max(n,arr);
}
//12 34 8 42 23 55 3 