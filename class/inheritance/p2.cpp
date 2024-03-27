#include<iostream>
using namespace std;
class A{
    protected:
    int num=0;
    int **p;
    public:
    A(){
         cout<<"Enter the data first enter the rollno after enter the marks";
        cin>>num;
    }
    int getnum();
    int getmarks(int ,int );
    void getdata()
    {
       
        p=new int*[num];
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<3;j++)
            {
                p[i]=new int;
            }
        }
        for(int i=0;i<num;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>p[i][j];
            }
        }
    }
    void putdata(){
            for(int i=0;i<num;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<p[i][j]<<" ";
                }
                cout<<endl;
            }
    }


};

class B{
    protected:
    int num1=0;
    int **p1;
    public:
    B(){
        cout<<"Enter the data first enter the rollno after enter the marks";
        cin>>num1;
    }
    int getnum1();
    int getmarks1(int ,int );
    void getdata1()
    {
        p1=new int*[num1];
        for(int i=0;i<num1;i++)
        {
            for(int j=0;j<3;j++)
            {
                p1[i]=new int;
            }
        }
        for(int i=0;i<num1;i++)
        {
            for(int j=0;j<3;j++)
            {
                cin>>p1[i][j];
            }
        }
    }
    void putdata1(){
            for(int i=0;i<num1;i++)
            {
                for(int j=0;j<3;j++)
                {
                    cout<<p1[i][j]<<" ";
                }
                cout<<endl;
            }
    }
};
class c:public A,public B
{
    public:
    c():A(),B(){
    }
    int avg(int);
    int avg1(int);
    void divide();
    void swap(int ,int);
};

int A::getnum(){
    return num;
}
int A::getmarks(int i,int j) 
{
    return p[i][j];
}
int B::getnum1(){
    return num1;
}
int B::getmarks1(int i,int j) 
{
    return p1[i][j];
}
int c::avg(int j)
{
    float sum = 0.0;
    int n=getnum();
    for(int i=0;i<n;i++)
    {
        sum += getmarks(i,j);
    }
    return sum;
}
int c::avg1(int j)
{
    float sum = 0.0;
    int n=getnum1();
    for(int i=0;i<n;i++)
    {
        sum += getmarks1(i,j);
    }
    return sum;
}
void c::swap(int in , int kn)
{
    int n=0;
    for(int i=0;i<3;i++)
    {
        n=p[in][i];
        p[in][i]=p1[kn][i];
        p1[kn][i]=n;
    }
}

void c::divide(){
    int n = getnum();
    int m=0,mn=0,count=0,in,jn,kn,i,j,k;
    for(i=0;i<n;i++)
    {
        count=0;
        in =0;
        kn=0;
        mn=0;
        // cout<<"Lets start the process: "<<endl;
            for( k=0;k<n;k++)
            {
                for(j=0;j<3;j++)
                {
                    if(p[i][j]<p1[k][j])
                    {
                        count++;
                    }
                }
                if(mn<count && mn !=3)
                {
                    mn=count;
                    in = i;
                    kn=k;
                }
                else if(mn==3)
                {
                    swap(in,kn);
                    break;
                }
                else
                {
                    continue;
                }
            }
            if(k==n-1)
            {
            swap(in,kn);
            }
    }
}
int main()
{
   c c1;
   c1.getdata();
   cout<<"class A :\n";
   c1.putdata();
   c1.getdata1();
   cout<<"class B :\n";
   c1.putdata1();
   for(int j=0;j<3;j++)
   {
    cout<<"The avg of "<<j+1<<"th subject is : ";
    cout<<c1.avg(j);
    cout<<endl;
   }
    for(int j=0;j<3;j++)
   {
    cout<<"The avg of "<<j+1<<"th subject is : ";
    cout<<c1.avg1(j);
    cout<<endl;
   }
   cout<<"Now i want to divide this class in  two groups based on marks."<<endl;
    cout<<"After divide"<<endl;
    c1.divide();
    c1.putdata();
    c1.putdata1();
}