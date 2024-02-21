#include<iostream>
using namespace std;
string fun(string s)
{
   if(s.substr(0,2)=="if")
   {
        return s;
   }
   else
   {
        return s.insert(0,"if ");
   }
}
int main()
{
    string s1,s2;
    getline(cin,s1);
    getline(cin,s2);
    s1 = fun(s1);
    s2 = fun(s2);
    cout<<s1<<endl;
    cout<<s2<<endl;
}