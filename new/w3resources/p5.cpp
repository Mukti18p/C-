#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    
   string a= s.substr(s.length()-1,1);
   s.insert(s.length()-1,a);
   s.insert(0,a);
    cout<<s<<endl;
}
