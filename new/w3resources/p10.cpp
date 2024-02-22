#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int ocrr=0;
    for(int i=0;i<s.length();i++)
    {
        if(i+1<s.length())
        {
        if(s.at(i)=='a' && s.at(i+1)=='a')
        {
            ocrr++;
        }
        }
    }
    cout<<ocrr<<endl;
}