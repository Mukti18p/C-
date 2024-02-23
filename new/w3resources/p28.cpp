#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    s2=s1.substr(2);
    s2=s2+s1.substr(0,2);
    cout<<s2<<endl;
}