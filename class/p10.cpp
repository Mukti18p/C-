#include<iostream>
using namespace std;
class abc{
    int v;
    int x;
    public:
        abc(int z){
            v=z;
            x=z;
        }
        abc(abc *p){
            v = p->v;
            x = p->x;

        }
        void display(){
            cout<<"Value of v : "<<v<<endl;
            cout<<x<<endl;
        }
};
int main()
{
    abc a (5);
    abc b(&a);
    b.display();

}