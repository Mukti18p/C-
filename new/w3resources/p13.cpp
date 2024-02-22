#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string temp="",res="";
    int j=0;
    for(int i=0;i<s.length();i++)
    {
        res=s.substr(0,i+1);
       
        temp.insert(j,res);
        j+=res.length();
        
    }
    cout<<temp<<endl;
}