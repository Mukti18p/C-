#include<iostream>
#include<cstring>
#include<algorithm>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    int n;
    cin>>n;
    s2=s1.substr(0,n);
    s2=s2+s1.substr(s1.length()-n,n);
    cout<<s2<<"\n";
}