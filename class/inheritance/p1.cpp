#include<iostream>
#include<cstring>
using namespace std;
class sanskrit{
    protected:
    int sub1;
    public:
    void read()
    {
        cin>>(sub1);
    }
    int get(){
        return sub1;
    }
    void put(){
        cout<<"The marks of sk is : "<<sub1<<endl;
    }
};
class comp{
    protected:
     int sub2;
    public:
    void read()
    {
        cin>>(sub2);
    }
    int get(){
        return sub2;
    }
    void put(){
    cout<<"The marks of comp is : "<<sub2<<endl;
    }

};
class stud:public sanskrit,public comp{
    private:
    int total;
    string name;
    public:
    int n;
    stud(int a=0)
    {
        cout<<"Enter the student's name"<<endl;
        cin>>name;
    }
    void main(int n){
        if(n==0)
        {
            
        cout<<"enter thhe total of main sub:"<<endl;
        cin>>total;
        total += sanskrit ::get() ;
        }
        else
        {
        cout<<"enter thhe total of main sub:"<<endl;
        cin>>total;
        total += comp::get() ;
        }
    }
    void print(){
        cout<<"Total marks "<<total;
        cout<<"\nName of the student : "<<name<<endl;
    }
};
int main(){
    stud s1;
    cout<<"0 for sanskrit"<<endl;
    cout<<"1 for compt"<<endl;
    cin>>s1.n;
    if(s1.n==0)
    {
        s1.sanskrit::read();
        s1.sanskrit::get();
        s1.sanskrit::put();
        s1.main(s1.n);
    }
    else
    {
        s1.comp::read();
        s1.comp::get();
        s1.comp::put();
        s1.main(s1.n);
    }
    s1.print();
}
