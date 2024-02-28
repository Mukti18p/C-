#include<iostream>
#include<cstring>
#include<limits>
using namespace std;

class fun{
    private:
        string name;
        int a[5];
    public:
        void getdata();
        void ptr(int n, fun *b[]);
        void putdata();
};      

void fun::putdata() {
    cout<<"Name : "<<name<<endl;
    for(int i=0; i<5; i++) {
        cout<<"Element["<<i+1<<"] = "<<a[i]<<endl;
    }
}

void fun::getdata() {
    cout<<"Enter name: ";
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); 
    getline(cin, name);
    cout<<"Enter marks :"<<endl;
    for(int i=0; i<5; i++) {
        cin>>a[i];
    }
}

void fun::ptr(int n, fun *b[]) {
    fun *p1;
    for(int i=0; i<n; i++) {
        for(int j=i+1; j<n; j++) {
            if(b[i]->name.compare(b[j]->name) > 0) {
                p1 = b[i];
                b[i] = b[j];
                b[j] = p1;
            }
        }
    }
}

int main() {
    int n;
    cout<<"Enter the number of students: ";
    cin>>n;
    
    fun *p[n];
    for(int i=0; i<n; i++) {
        p[i] = new fun;
    }

    for(int i=0; i<n; i++) {
        p[i]->getdata();
    }
    
    p[0]->ptr(n, p);
    
    for(int j=0; j<n; j++) {
        p[j]->putdata();
    }
    
    return 0;
}