#include<iostream>
using namespace std;


int main()
{
        int classh,classatt,per;
        cin>>classh;
        cin>>classatt;

        per=(classatt*100)/classh;
        
        if(per<75)
        {
            cout<<"student is not allow\n";
        }
        else{
            cout<<"student is allow";
        }

}