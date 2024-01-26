#include<iostream>
using namespace std;
int main()
{
    char medical;
    cout<<"if she/he has medical cause then write Y and has not medical cause then write N"<<endl;
    cin>>medical;

    if(medical=='Y' || medical =='y')
    {
        cout<<"she/he has medical cause"<<endl;
    }
    else{
        cout<<"she/he has not medical cause"<<endl;
    }
}