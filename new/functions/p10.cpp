#include<iostream>
#include<cstring>
using namespace std;
string reverse(string str)
{
    int l=str.length();
    string temp;
    for(int i=0;i<l;i++)
    {
        if(i==0)
        {
             temp=str.substr(0,1);
        }
        else
        {
            char t=str.at(i);
            str.at(i)=str.at(i-1);
            str.at(i-1)=t;
        }
    }
    str=str+temp;
   
}
void reverse(int n,int *p)
{
    int t;
    for(int i=0;i<n;i++)
    {
        if(i==0)
        {
            t=p[i];
        }
        else
        {
            p[i-1]=p[i];
        }
    }
    p[n-1]=t;
}
int main()
{
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    reverse(n,a);
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    string str;
    getline(cin,str);
   str=reverse(str);

}