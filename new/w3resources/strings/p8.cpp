#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int j=0,max=-1,l;
    string s,res;
    getline(cin,s);
    l=s.length();
    int a[l]={0},ocrr[l]={0};
    for(int i=0;i<s.length();i++)
    {
        if(a[i]!=-1)
        {
            for(int j=i+1;j<s.length();j++)
            {
                if(s[i]==s[j])
                {
                    a[j]=-1;
                    ocrr[i]++;
                }
            }
        }
        
    }
    int flag=0;
    for(int i=0;i<l;i++)
    {
        for(int j=i+1;j<l;j++)
        {
            if(ocrr[i]==ocrr[j] && ocrr[i]!=0)
            {
                cout<<"True"<<endl;
                flag=1;
                break;
            }
        }
        if(flag==1)
        {
            break;
        }
        
    }

}