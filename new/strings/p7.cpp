#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string temp;
    getline(cin,temp);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='C' || s[i]=='c')
        {
            s.erase(i,1);
            s.insert(i,temp);
            i+=temp.length();
        }
    }
    cout<<s<<endl;
}