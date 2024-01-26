#include<iostream>
using namespace std;
int main()
{
    int num;
    cin>>num;
    int fact=1;

    for(int i=num;i>=1;i--)
    {
        fact=fact*i;
    }
    cout<<fact<<endl;
}