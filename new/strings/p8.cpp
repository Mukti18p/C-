#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s[3][3];
    for(int i=0;i<3;i++)
    {
        cout<<i+1<<"th student "<<endl;
        for(int j=0;j<3;j++)
        {
            getline(cin,s[i][j]);
        }
    }
    for(int i=0;i<3;i++)
    {
               cout<<i+1<<"th student "<<endl;
                cout<<"name"<<s[i][0]<<endl;
                cout<<"roll no"<<s[i][1]<<endl;
                cout<<"Mark obtained"<<s[i][2]<<endl;
    }
    for(int i=0;i<3;i++)
    {
        for(int j=i+1;j<3;j++)
        {
            if(s[i][0].compare(s[j][0]) > 0)
            {
                string temp=s[j][0];
                s[j][0]=s[i][0];
                s[i][0]=temp;
            }
        }
    }

   
    int a,b;
    for(int i=0;i<3;i++)
    {
        a=stoi(s[i][1]);
        for(int j=i+1;j<3;j++)
        {
            b=stoi(s[j][1]);
            if(a>b)
            {
                string temp1=s[i][1];
                s[i][1]=s[j][1];
                s[j][1]=temp1;
            }
        }
    }

     for(int i=0;i<3;i++)
    {
               cout<<i+1<<"th student "<<endl;
                cout<<"name "<<s[i][0]<<endl;
                cout<<"roll no  "<<s[i][1]<<endl;
                cout<<"Mark obtained "<<s[i][2]<<endl;
    }
    return 0;

}