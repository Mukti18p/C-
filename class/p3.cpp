#include<iostream>
#include<cstring>
#include<limits>
using namespace std;
class fun{
    private:
            int day;
            string description;
            int amount;
    public:
            void getdata();
            void range(fun *[]);
};
void fun::getdata()
{
    cout<<"Enter the number of Day : ";
    cin>>day;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cout<<"\nEnter the Description : ";
    getline(cin,description);
    cout<<"ENter amount : ";
    cin>>amount;
}
void fun::range(fun* arr[])
{
    for(int i=0;i<7;i++)
    {
        if(arr[i]->amount >=100 && arr[i]->amount<=500)
        {
            cout<<"day: ";
            cout<<arr[i]->day<<endl;
            cout<<"description: ";
            cout<<arr[i]->description<<endl;
            cout<<"amount: ";
            cout<<arr[i]->amount<<endl;
        }
    }
}
int main()
{
       fun *p[7];
       for(int i=0;i<7;i++)
       {
        p[i]=new fun;
       }
        for(int i=0;i<7;i++)
        {
            p[i]->getdata();
        }
        p[0]->range(p);
}