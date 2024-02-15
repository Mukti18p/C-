#include<iostream>
using namespace std;
int main()
{
    int n,flag=0;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int q;
    cin>>q;
    int i,j;
  
    while(q!=0)
    {
        int ele;
        cin>>ele;
         i=0;
        j=n-1;
        while(i<=j)
        {
            if(arr[i]==ele && i!=j)
            {
                cout<<ele<<" AT index: "<<i<<endl;
                break;
            }
            if(arr[j]==ele)
            {
                cout<<ele<<" AT index: "<<j<<endl;
                break;
            }
            else
            {
                flag=-1;
            }
            i++;
            j--;
        }
        q--;
    }
}