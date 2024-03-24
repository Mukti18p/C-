#include<iostream>
using namespace std;
class matrix{
    int **p;
    int d1,d2;
    public:
    matrix(int d3,int d4)
    {
        d1 = d3;
        d2 = d4;
        p = new int *[d1];
        for(int i=0;i<d1;i++)
        {
            p[i]=new int[d2];
        }
    }
    void getdata()
    {
        cout<<"Enter the elements of the Matrix : "<<endl;
         for(int i=0;i<d1;i++)
        {
            for(int j=0;j<d2;j++)
            {
                cin>>p[i][j];
            }
        }
    }
    void display(){
        for(int i=0;i<d1;i++)
        {
            for(int j=0;j<d2;j++)
            {
                cout<<p[i][j]<<endl;
            }
        }
    }
   
};
int main()
{
    matrix  m(3,4);
    m.getdata();
    m.display();
   
}