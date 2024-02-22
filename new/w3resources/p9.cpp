#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    int n;
    cin>>n;
    if(s1.length()>=3)
    {
    s1.erase(3);
    string res;
    for(int i=0;i<n;i++)
    {
        res=res+s1;
    }
    cout<<res<<endl;
    }
    else
    {

    string res;
    for(int i=0;i<n;i++)
    {
        res=res+s1;
    }
    cout<<res<<endl;
    }
}