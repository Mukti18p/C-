#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int a = s.find("C#",0,2);
    cout<<a+1<<endl;

}