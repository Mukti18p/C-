#include<iostream>
#include<string>
using namespace std;
int fun(int n,int a[])
{
    int i,ocrr=0;
    for(i=0;i<n-1;i++)
    {
      
            if(a[i]==a[i+1]&& a[i]==5)
            {
                ocrr++;
            }
            else if(a[i]==5 && a[i+1]==6)
            {
                ocrr++;
            }
            else 
            {
                continue;
            }
    }
    return ocrr;

}
int main()
{
   int i=0,n;
   cin>>n;
   int arr[n];
   for(int i=0;i<n;i++)
   {
        cin>>arr[i];
   }
  cout<< fun(n,arr)<<endl;
  
}