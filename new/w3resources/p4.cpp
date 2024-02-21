#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    if(s1.length()<2)
    {
        cout<<s1<<endl;
    }
    else
    {
        s1.erase(2);
        s1.insert(2,s1);
        s1.insert(2,s1);
        cout<<s1<<endl;
    }
}