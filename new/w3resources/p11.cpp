#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s;
    getline(cin,s);
    int ocrr=-1;
    for(int i=0;i<s.length();i++)
    {
        
        if(i+1<s.length() &&s.at(i)=='a' && s.at(i+1)=='a')
        {
            ocrr=1;
            break;
        }
        else if(s.at(i)=='a' && s.at(i+1)!='a')
        {
                ocrr=0;
                break;
        }
        else
        {
            continue;
        }
        
    }
    std::cout<<ocrr<<endl;
}
