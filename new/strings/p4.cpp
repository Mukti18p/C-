#include<iostream>
#include<cstring>
using namespace std;
int main()
{
   
    string s;
    getline(cin,s);
    int m;
    cin>>m;
     int n,i,j;
    cin>>n;
    string temp=s.substr(m,n);
    cout<<temp<<endl;
}