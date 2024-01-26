#include<iostream>
using namespace std;

int main()
{
    int p1,p2,p3;
    cin>>p1;
    cin>>p2;
    cin>>p3;

    if(p1<p2)
    {
        if(p3<p2)
        {
            cout << "p2" << endl;
        }
        else
        {
            cout << "p3" << endl;
        }
    }
    else{
        if(p3>p1)
        {
            cout<<"p3"<<endl;
        }
        else{
            cout<<"p1"<<endl;
        }
    }
}