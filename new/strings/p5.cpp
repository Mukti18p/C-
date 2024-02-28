#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    int i,j,count=0;
    string s;
    getline(cin,s);
    string temp;
    getline(cin,temp);

    j=temp.length();
    for(i=0;i<s.length();i++)
    {
        
            if(s.substr(i,j)==temp)
            {
                count++;
            }
    }
    cout<<count<<endl;

}