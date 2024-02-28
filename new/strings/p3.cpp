#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    string s1;
    getline(cin,s1);
   int i=0;
   int j=s1.length()-1;
   while(i<j && s1[i]==s1[j])
   {
    cout<<s1[i]<<endl<<s1[j]<<endl;
    i++;
    j--;
   }
   if(i==j)
   {
    cout<<"Palindrome"<<endl;
   }
   else
   {
    cout<<"Not palindrome"<<endl;
   }
}