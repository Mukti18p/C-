#include<iostream>
using namespace std;
int large(int n,int arr[])
{
    int m=0,fm=-1;
            for(int i=0;i<n;i++)
            {
                    if(m<arr[i])
                    {
                        fm=m;
                        m=arr[i];
                    }
                    else if(fm!=m && fm<arr[i])
                    {
                           
                            fm=arr[i];
                    }
            }
            cout<<"print the array";
            for(int i=0;i<n;i++)
            {
                if(arr[i]!=fm && arr[i]!=m)
                {
                    cout<<arr[i]<<" ";
                }
            }
            cout<<endl;
            return 0;
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
    large(n,arr);
}