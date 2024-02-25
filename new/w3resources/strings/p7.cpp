#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int j=0,max=-1;
    string s;
    getline(cin,s);
    for(int i=0;i<s.length();i++)
    {
       if(i==0 || s[i]==' ')
       {
        j++;
       }
    }
    cout<<j<<endl;
    
}