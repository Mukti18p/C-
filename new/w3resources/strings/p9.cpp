#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int j=0;
    string s;
    getline(cin,s);
    j=s.length()-1;
    int i=0;
   while(i!=j && i<=j && s[i]==s[j])
   {
    i++;
    j--;
   }
   if(i==j)
   {
    cout<<"Yes"<<endl;
   }
   else
   {
    cout<<"NO"<<endl;
   }
}