#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    string res="";
    int l=s.length();
    res=s.substr(l-2,l-1);
    s.erase(l-2,l);
   
    int ocrr=0,x=0;
    for(int i=0;i<l-2;i++)
    {
        x=s.find(res);
        if(x==-1)
        {
            break;
        }
        else 
        {
            ocrr++;
            s.erase(x,x+2);
        }
       
    }
    cout<<ocrr<<endl;
}