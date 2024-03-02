#include<iostream>
#include<cstring>
using namespace std;
struct st{
    int a,b;
    
};
int main()
{
    int r,c;
    cin>>r>>c;
    int **ip;
    ip = (int **)malloc(sizeof(int *) * r); //allocating memory for rows 
    for(int i=0;i<r;i++)
    {
        ip[i]=(int *)malloc(sizeof(int) * c);
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>*(*(ip+i)+j);
        }
    }
    for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<ip[i][j]<<" ";

        }
        cout<<endl;
    }
    cout<<"second array: "<<endl;
    int *iq[r];
    for(int i=0;i<r;i++)
    {   
            *(iq+i)=(int *)malloc(sizeof(int)*c);
    }   
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cin>>*(*(iq+i)+j);
        }
    }
     for(int i=0;i<r;i++)
    {
        for(int j=0;j<c;j++)
        {
            cout<<iq[i][j]<<" ";

        }
        cout<<endl;
    }

}