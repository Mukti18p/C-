#include<iostream>
#include<cstring>
using namespace std;
class fun{
    private:
        string name;
        int a[5];


    public:
    void getdata();
    void ptr(int n,fun *a);

};      
void   fun::getdata() {
    cout<<"Enter name";
    getline(cin,name);
    cout<<"Enter marks :"<<endl;
    for(int i=0;i<5;i++)
    {
        cin>>a[i];
    }
}
void ptr(int n,fun *a)
{
    
}
int main()
{
        int n,i,j;
        cin>>n;
        fun *p = new fun[n];
        for(i=0; i<n;i++)
        {
            p[i].getdata();
        }
       p[0].ptr(n,&p[0]);
       
}