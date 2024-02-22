#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string res="";
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        if(i%2==0)
        {
            res+=s[i];
        }

    }
    cout<<res<<endl;
}