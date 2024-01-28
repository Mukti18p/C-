#include<iostream>
using namespace std;
void swap(int *a,int *b)
{
    int *temp=0;
    *temp=*a;
    *a=*b;
    *b=*temp;
}
int main()
{
    int i,j;
    int n;
    cin>>n;
    int arr[n];
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<n;i++)
    {
       for(j=i;j<n;j++)
       {
            if(arr[j]<arr[i])
            {
                swap(arr[j],arr[i]);
            }
       }
    }
    for(i=0;i<n;i+=2)
    {
       swap(arr[i],arr[i+1]);
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
}
// 4 5 9 12 9 22 45 7
// 4 5 7 9 9 12 22 45
//5 4 9 7 12 9 45 22