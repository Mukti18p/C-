#include<iostream>
using namespace std;
class complex{
    static int count;
    int re;
    int img;
    public:
    complex(int i =0,int j=0)
    {
        cout<<"Default"<<endl;
        count++;
        cout<<"Count :"<<count<<endl;
        re = i;
        img = j;
    }
    ~complex(){
        count--;
        cout<<"Count :"<<count<<endl;
        cout<<"Destructor"<<endl;
    }
    complex(complex &);
    friend complex add(complex c1,complex c2);
    void display (complex );

};
int complex :: count =0;
complex::complex(complex & c4)
{
    cout<<"Copy COnst"<<endl;
    count++;
    cout<<"Count :"<<count<<endl;
    re = c4.re;
    img = c4.img;
}
complex add(complex c1,complex c2)
{
    complex temp;
    temp.re = c1.re+c2.re;
    temp.img = c1.img + c2.img;
    return temp;
}
void complex::display(complex c1)
{
    cout << "The value of the real part is : " << c1.re ;
    cout << "\n The value of the img part  is : "<<c1.img<<endl;
}
int main()
{
    complex c1(1,2);
    complex c2(3,4);
    complex c3 = {c2}; //copy constructor
    complex c4= (c3);//doubt
    c3.display(c3);
    c4.display(c4);
    c4 = add(c1,c2);
    c4.display(c4);
    return 0;
}