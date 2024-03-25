#include<iostream>
using namespace std;
class phone{
    protected:
    float price;
    int n;
    public:
    void getdata();
    void putdata();
    int getphone(){
        return n;
    }
    int getprice(){
        return price;
    }
};
class fridge:public phone{
    protected:
    float price1;
    public:
    float finalprice(int );
    float finalprice1(int );
    void getdata();
    int putdata();
};
void phone::getdata(){
    cout<<"Enter the 1 if you buy fridge or 0  : ";
    cin>>n;
    cout<<"Enter the cost of phone : ";
    cin>>price;
}
void phone::putdata()
{
    cout<<"price : "<<price<<endl;
    cout<<"n :"<<n<<endl;
}
void fridge::getdata(){
    cout<<"Enter the price  of fridge : ";
    cin>>price1;
}
int fridge::putdata(){
    return price;
}

float fridge:: finalprice(int a)
{
    float temp = a;
    temp = temp + (0.18 * temp);
    return temp;
}
float fridge:: finalprice1(int b)
{
    float temp = b;
    temp = price1 +  (0.50 * temp);
    return temp;
}
int main()
{
    phone p[2];
    for(int i=0;i<2;i++)
    {
        cout<<"Enter the price of a phone : ";
        p[i].phone::getdata();
        p[i].phone::putdata();
    }
    fridge f[2];
    for(int i=0;i<2;i++)
    {
        
        if(p[i].getphone()==0){
           int a = p[i].getprice();
         cout<< f[i].finalprice(a)<<endl;
        }
        else
        {
            f[i].getdata();
            int b = p[i].getprice();
            cout<<f[i].finalprice1(b)<<endl;
        }
    }

}