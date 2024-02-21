#include<iostream>
#include<string>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
    int n;
    cin>>n;
    s1.erase(n,1);
    cout<<s1<<endl;
}