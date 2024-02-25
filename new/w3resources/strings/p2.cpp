#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==122)
        {
            s[i]=97;
        }
        else if(s[i]>=97 && s[i]<122)
        {
            s[i]=s[i]+1;
        }
        else
        {
            continue;
        }
    }
    cout<<s<<endl;
}