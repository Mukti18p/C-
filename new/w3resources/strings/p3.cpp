#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(i==0)
        {
            if(s[i]>=97 && s[i]<=122)
            {
                s[i]=s[i]-32;
            }
        }
        else if(s[i]==' ')
        {
           if(s[i+1]>=97 && s[i+1]<=122)
            {
                s[i+1]=s[i+1]-32;
            }
        }
        else
        {
            continue;
        }
    }
    cout<<s<<endl;
}