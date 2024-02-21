#include<iostream>
#include<string>
using namespace std;
int main()
{
   string s;int ocrr=0;
   getline(cin,s);
   for(int i=0;i<s.length();i++)
   {
        if(s[i]=='z')
        {
                ocrr++;
        }
   }
   if(ocrr>=2)
   {
    cout<<1<<endl;
   }
   else
   {
    cout<<0<<endl;
   }
}