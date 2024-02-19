#include<iostream>
#include<cstring>
using namespace std;
int main()
{
    struct st
    {
        char name[20];
        int id;
        int age;
    };
    struct st *p,*ptr;
    int n;
    cin>>n;
    p=(struct st *)malloc(n*sizeof(st));
    ptr=p;
    int i,j;
    for(i=0;i<n;i++)
    {
        cin>>p->name;
        cin>>p->id;
        cin>>p->age;
        p++;
    }
    p=ptr;
    for(i=0;i<n;i++)
    {
        cout<<p->name<<endl;
        cout<<p->id<<endl;
        cout<<p->age<<endl;
        p++;
    }
    p=ptr;
    return 0;
}