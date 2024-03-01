#include<iostream>
#include<cstring>
#include<limits>
using namespace std;
class fun{
    private:
            int count;
            string *name;
    public:
    void getdata();
    void srt(int,fun **);
    void swap(fun ** , fun **);
    void cpy(int n,fun *,fun *);
    void print();
};
void fun::getdata()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin>>count;
    name= new string[count];
    for(int i=0;i<count;i++)
    {
        getline(cin,name[i]);
    }
}
void fun::swap(fun** c, fun** d)
{
    fun *temp=*c;
    *c=*d;
    *d=temp;
}
void fun::srt(int n,fun *b[])
{
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(b[i]->count > b[j]->count)
            {
                swap(&b[i],&b[j]);
            }
        }
    }
}
void fun::cpy(int n,fun *a,fun *b)
{
    int c=0;
    for(int i=0;i<n;i++)
    {
        a->count=b->count;
        c=a->count;
        a->name = b->name;
        a++;
        b++;
    }
}
void fun::print()
{
    for(int i=0;i<count;i++)
    {
        cout<<name[i]<<" ";
    }
    cout<<endl;
}
int main()
{
    int n,i,j;
    cin>>n;
    fun guests[n],copy[n],f;
    for(i=0; i<n; i++)
    {
        guests[i].getdata();
    }
    f.cpy(n,&copy[0],&guests[0]);
    
    fun *p[n];
    for(int i=0;i<n;i++)
    {
        p[i]=&copy[i];
    }
    copy[0].srt(n,&p[0]);
    for(int i=0;i<n;i++)
    {
        copy[i].print();
    }

}