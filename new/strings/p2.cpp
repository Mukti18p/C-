#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        getline(cin,s[i]);
    }
    for(int j=0;j<n;j++)
    {
        cout<<s[j]<<endl;
    }

    cout<<"Programe"<<endl;
    string temp="";
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
                if(s[i].compare(s[j])<0)
                {
                            temp=s[i];
                            s[i]=s[j];
                            s[j]=temp;
                }
        }
    }
    for(int j=0;j<n;j++)
    {
        cout<<s[j]<<endl;
    }




}