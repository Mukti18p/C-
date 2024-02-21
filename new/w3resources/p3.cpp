#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    int l=s1.length();
    char a;
    a=s1[0];
    s1[0]=s1[l-1];
    s1[l-1]=a;
    cout<<s1<<endl;
}