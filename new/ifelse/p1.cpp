#include<iostream>
using namespace std;

int main()
{
   int quantity;
   int cost,price=0;
   cin>>quantity;
   price=100*quantity;
   
   if(price>1000)
   {
        cout<<"price is "<<price-(price*0.1)<<endl;
   }
   else
   {
    cout<<"price is"<<price<<endl;
   }
    return 0;
}