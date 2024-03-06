#include<iostream>
#include<cstring>
using namespace std;
class abc;
class xyz;
class xyz{
    char name[20];
    int marks;
    static int count;
    void putdata();
    public:
    void getdata();
    static void update();
    static void print();
    friend  xyz* sum(xyz *, abc *,xyz *);
    void printres();

};
int  xyz::count=0;
class abc{
    char name[20];
    int marks;
    static int count;
    void putdata();
    public:
    void getdata();
    static void update();
    static void print();
    friend  xyz* sum(xyz *, abc *,xyz *);
    
};
int abc::count=0;
void xyz::putdata()
{
    cout<<name<<endl;
    cout<<marks<<endl;
}
void xyz::getdata()
{
    std::cout<<"Enter the name :"<<endl;
    cin>>name;
    std::cout<<"Enter the marks :"<<endl;
    cin>>marks;
    putdata();
}
void xyz::print(){
    cout<<"The count: "<<endl;
    cout<<count<<endl;
    
}
void xyz::update()
{
    count++;
}
void abc::putdata()
{
    cout<<name<<endl;
    cout<<marks<<endl;
}
void abc::getdata()
{
    std::cout<<"Enter the name :"<<endl;
    cin>>name;
    std::cout<<"Enter the marks :"<<endl;
    cin>>marks;
    putdata();
}
void abc::print(){
    cout<<"The count: "<<endl;
    cout<<count<<endl;
    
}
void abc::update()
{
    count++;
}
xyz* sum(xyz *s , abc *s1,xyz *t)
{
   for(int i=0;i<3;i++)
   {
    t->marks=s->marks+s1->marks;
    t++;
    s1++;
    s++;
   }
   return t;
}
void xyz::printres()
{
    static int temp=0;
    cout<<temp<<" : "<<endl;
    cout<<marks<<endl;
    temp++;
}
int main()
{
    xyz s[3],res[3];
    for(int i=0;i<3;i++)
    {
        s[i].getdata();
        xyz::update();
        s[i].print();
    }
     abc s1[3];
      for(int i=0;i<3;i++)
    {
        s1[i].getdata();
        abc::update();
        s1[i].print();
    }

   sum(s,s1,res);
   for(int i=0;i<3;i++)
   {
    res[i].printres();
   }

}
// if we declare static member function outside the defination then static is not required to write .
// static data member ... int xyz::count=0;  int classname::var=0;
//static meber function call classname::fun();
//constant meber function outside defination returntype-class::fun()const{}
//static and const both are not combine Together in function

