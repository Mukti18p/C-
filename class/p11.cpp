#include<iostream>
using namespace std;
class abc{
    private:
        int **p;
    public:
    abc(){}
    abc(int m,int n){
        p = new int *[m];
        for(int i=0;i<m;i++)
        {
            p[i]=new int [n];
        }
    }
    void getdata(int i,int j){
            cin>>p[i][j];
    }
    int putdata(int i,int j)
    {
        return p[i][j];
    }

};
int main()
{
    int m,n;
    cin>>m;
    cin>>n;
    abc p(m,n);
    cout<<"Enter the elements of array : "<<endl;
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            p.getdata(i,j);
        }
    }

    
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<p.putdata(i,j);
        }
    }

}