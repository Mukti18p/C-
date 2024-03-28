#include <iostream>
using namespace std;

class A
{
protected:
    int num;
    int **p;

public:
    A()
    {
        cout << "Enter the number of students: ";
        cin >> num;

        p = new int *[num];
        for (int i = 0; i < num; i++)
        {
            p[i] = new int[3];
            for (int j = 0; j < 3; j++)
            {
                cin >> p[i][j];
            }
        }
    }

    int getNum()
    {
        return num;
    }

    int getMarks(int i, int j)
    {
        return p[i][j];
    }

    void display()
    {
        for (int i = 0; i < num; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << p[i][j] << "  ";
            }
            cout << endl;
        }
    }
};

class B
{
protected:
    int num1;
    int **p1;

public:
    B()
    {
        cout << "Enter the number of students: ";
        cin >> num1;

        p1 = new int *[num1];
        for (int i = 0; i < num1; i++)
        {
            p1[i] = new int[3];
            for (int j = 0; j < 3; j++)
            {
                cin >> p1[i][j];
            }
        }
    }

    int getNum1()
    {
        return num1;
    }

    int getMarks1(int i, int j)
    {
        return p1[i][j];
    }

    void display()
    {
        for (int i = 0; i < num1; i++)
        {
            for (int j = 0; j < 3; j++)
            {
                cout << p1[i][j] << "  ";
            }
            cout << endl;
        }
    }
};

class C : public A, public B
{
public:
    C() : A(), B()
    {
    }

    int avg(int j)
    {
        float sum = 0.0;
        int n = getNum();
        for (int i = 0; i < n; i++)
        {
            sum += getMarks(i, j);
        }
        return sum / n;
    }

    int avg1(int j)
    {
        float sum = 0.0;
        int n = getNum1();
        for (int i = 0; i < n; i++)
        {
            sum += getMarks1(i, j);
        }
        return sum / n;
    }
    void swap(int in,int kn)
    {
        int temp = p[in][0];
        p[in][0]=p1[kn][0];
        p1[kn][0]=temp;
        temp = p[in][1];
        p[in][1]=p1[kn][1];
        p1[kn][1]=temp;
        temp = p[in][2];
        p[in][2]=p1[kn][2];
        p1[kn][2]=temp;
    }
    void divide()
    {
        //doubt
    }
};

int main()
{
    C c1;
    cout << "class A :" << endl;
    c1.A::display();
    cout << "class B :" << endl;
    c1.B::display();
    for (int j = 0; j < 3; j++)
    {
        cout << "The avg of " << j + 1 << "th subject is : " ;
        cout << c1.avg(j) << endl;
    }
    for (int j = 0; j < 3; j++)
    {
        cout << "The avg of " << j + 1 << "th subject is : " ;
        cout << c1.avg1(j) << endl;
    }
    cout << "Now i want to divide this class in  two groups based on marks." << endl;
    cout << "After divide" << endl;
    c1.divide();
    cout<<"Display :"<<endl;
    c1.A::display();
    c1.B::display();
    return 0;
}