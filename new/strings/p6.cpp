#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        for(int j=i+1;j<s.length();j++)
        {
            if(s[i]>s[j])
            {
                char temp = s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    } 
    cout<<s<<endl;   
}