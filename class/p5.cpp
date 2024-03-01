#include <iostream>
#include <cstring>
#include<limits>
using namespace std;

class student1;
class student
{
private:
   string name;
    int roll;

public:
    void getdata();
    void putdata();
    friend int find(int, student *[], student1 *[]);
    friend void swap(int a,int b,student *[],student1 *[]);
};

class student1
{
private:
    string name;
    int roll;

public:
    void getdata();
    void putdata();
    friend int find(int, student *[], student1 *[]);
    friend void swap(int a,int b,student *[],student1 *[]);
};

void student::getdata()
{
     cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,name);
    cin >> roll;
}

void student::putdata()
{
    cout << "Name: " << name << endl;
    cout << "Roll no = " << roll << endl;
}

void student1::getdata()
{
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    getline(cin,name);
    cin >> roll;
}

void student1::putdata()
{
    cout << "Name: " << name << endl;
    cout << "Roll no = " << roll << endl;
}

int find(int n, student *p[], student1 *q[])
{
    int a=0,b=0;
    string temp;
    for (int i = 0; i < n; i++)
    {
        temp=p[i]->name;
        if(temp.compare("Jhon")==0)
        {
             a=i;
            break;
        }
    }
    for (int i = 0; i < n; i++)
    {

       temp=q[i]->name;
        if(temp.compare("mukti")==0)
        {
             b=i;
            break;
        }
    }
    if (a != -1 && b != -1) {
        swap(a,b,p,q);
    }
    return 0;
}

void swap(int a,int b,student *p[],student1 *q[])
{
    int temp=p[a]->roll;
    p[a]->roll=q[b]->roll;
    q[b]->roll=temp;
   
    string t;
    t=p[a]->name;
    p[a]->name=q[b]->name;
    q[b]->name=t;
}

int main()
{
    int n = 5;
    cin >> n;
    student *p[n];
    for (int i = 0; i < n; i++)
    {
        p[i] = new student;
    }
    for (int i = 0; i < n; i++)
    {
        p[i]->getdata();
       
    }
    for (int i = 0; i < n; i++)
    {
        p[i]->putdata();
    }
    student1 *q[n];
    for (int i = 0; i < n; i++)
    {
        q[i] = new student1;
       
    }
     for (int i = 0; i < n; i++)
    {
        q[i]->getdata();
       
    }
    for (int i = 0; i < n; i++)
    {
        q[i]->putdata();
    }
    find(n, p, q);
    cout<<endl<<"after swapping"<<endl;
    for (int i = 0; i < n; i++)
    {
        p[i]->putdata();
    }
    for (int i = 0; i < n; i++)
    {
        q[i]->putdata();
    }
    // Deallocate dynamically allocated memory
    for (int i = 0; i < n; i++) {
        delete p[i];
        delete q[i];
    }
}
