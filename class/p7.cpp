#include<iostream>
#include<cstring>
#include<limits>
using namespace std;
class xyz;
class abc
{
    int a;
    int b;
    public:
    friend void set(abc **,int );

};
class xyz
{
    int a;
    int b;
    public:
    

};
void set(abc **p ,int n)
{
    cout<<"enter input";
    for(int i=0;i<n;i++)
    {
        cin>>p[i]->a;
        cin>>p[i]->b;
    }
}
int main()
{
    int n;
    cin>>n;
    abc **ip,s;
    ip=new abc*[n];
    for(int i=0;i<n;i++)
    {
       ip[i]=new abc[2];
    }
    set(ip,n);

}