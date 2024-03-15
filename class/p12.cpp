#include<iostream>
#include<cstring>
#include<limits>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int m=0,n;
    cin>>n;
    string s1;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,s1);
    int len = s1.length();
    for(int i=0;i!=len;i++)
    {
        if((s1.at(i) == s1.at(i-1) || s1.at(i) == s1.at(i+1)) && i!=0  && i!=(len-1))
        {
            m++;
        }
        else if(i==0 && s1.at(i) == s1.at(i+1))
        {
            m++;
        }
        else if(i==len-1 && s1.at(i) == s1.at(i-1))

        {
            m++;
        }
        else
        {
            continue;
        }
    }
    if(m==n)
    {
        cout<<"YES"<<endl;
        cout<<s1<<endl;
    }
    else
    {
        m=0;
        n=0;
        cout<<"NO"<<endl;
    }
    }


}