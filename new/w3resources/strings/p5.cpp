#include<iostream>
#include<cstring>
using namespace std;
void swap(char &a,char &b)
{
    char temp;
    
    temp=a;
    a=b;
    b=temp;
}
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
                swap(s[i],s[j]);
            }
        }
    }
    cout<<s<<endl;
}