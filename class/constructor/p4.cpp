#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int a[n];
    int b[n];
    for(int i=0;i<2*n;i++)
    {
        cin>>a[i];
    }
    int j=0;
    for(int i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            b[j]=a[i];
            j++;
        }
    }
    for(int i=0;i<2*n;i++)
    {
       if(a[i]%2==1)
       {
        a[i]=a[i+1];
       }
    }
    cout<<"code"<<endl<<endl;
    int m;
    cin>>m;
    cout<<m<<endl;
    int i=0,temp,c,tm;
    temp=0;
    c=1;
    tm=0;
    while(i!=n && tm!=m)
    {
        a[i]=temp;
        c=0;
        while(a[i]<=m && c<=b[i])
        {
                a[i]=a[i]+a[i];
                
                c++;
        }
        cout<<a[i]<<endl;
        m= m-a[i];
        b[i]=c;
        a[i]=temp;
        cout<<m<<endl<<b[i]<<endl;
        i++;
    }
    if(m == 0)
    {
        for(int j=0;j<n;j++)
        {
            cout<<a[j]<<" "<<b[j]<<endl;
        }
    }
    else
    {
            cout<<-1<<endl;
    }
}