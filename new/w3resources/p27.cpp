#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    string s3;
    int l;
    l=s1.length();
    if(l%2==0)
    {
        l=(l/2);
    }
    s1.insert(l,s2);
    cout<<s1<<endl;
}