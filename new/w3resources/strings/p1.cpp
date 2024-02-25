#include<iostream>
#include<cstring>
using namespace std;
void swap(char &a,char &b)
{
    char temp;
    
    temp=a;
    a=b;
    b=temp;
}
void reverse(string &s1)
{

    int i,j;
    i=0;
    j=s1.length()-1;
    while(i!=j && i<=j)
    {
        swap(s1[i],s1[j]);
        i++;
        j--;
    }

}
int main()
{
    string s1;
    getline(cin,s1);
    reverse(s1);
    cout<<s1<<endl;
}