#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    if(s.length()>3)
    {
    string a=s.substr(0,3);
 
    s.insert(0,a);
    s.insert(s.length(),a);
    cout<<s<<endl;
    }
    else
    {
        int n=s.length();
        string a = s.substr(0,n);
        s.insert(0,a);
        s.insert(s.length(),a);
        cout<<s<<endl;
    }
}