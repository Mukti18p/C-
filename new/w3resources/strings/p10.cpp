#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int j=0,max=-1;
    string s,res;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
        if(s[i]==' ' || i==0)
        {
            if(max<j)
            {
                max=j;
                res=s.substr(i-j,j);
            }
            j=0;
        }
        
        j++;
    }
    cout<<res<<endl;
}