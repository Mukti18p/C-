#include<iostream>
using namespace std;
int main()
{
    int n1,n2,c=0;
    cin>>n1;
    cin>>n2;
    int n3;
    n3=(n1>n2)?n1:n2;
    for(int i=1;i<n3;i++)
    {
        for(int j=1;j<n3;j++)
        {
            if(n1*i==n2*j)
            {
                c=1;
                cout<<n1*i<<endl;
            }
            if(c==1)
            {
                break;
            }
                
        }
        

    }
}