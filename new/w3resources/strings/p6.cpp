#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int j=0;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]=='e')
        {
            j=i;
            while(s[j]!='g' && j!=s.length())
            {
                j++;
            }
            if(j-i==2 && j!=s.length())
            {
                cout<<1<<endl;
                break;
            }
        }
    }    
}