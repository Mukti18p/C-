#include<iostream>
#include<cstring>
#include<limits>
using namespace std;

class student {
private:
    string name;
    int roll;
    int marks;
public:
    void getdata();
    void putdata(student *, int);
    void swap(student *, student *);
    void print();
};

void student::print() {
    cout << name << endl;
    cout << roll << endl;
    cout << marks << endl;
}

void student::swap(student *m, student *n) {
    string temp_name = m->name;
    int temp_roll = m->roll;
    int temp_marks = m->marks;

    m->name = n->name;
    m->roll = n->roll;
    m->marks = n->marks;

    n->name = temp_name;
    n->roll = temp_roll;
    n->marks = temp_marks;
}

void student::putdata(student *a, int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (a[i].name.compare(a[j].name) > 0) {
                swap(&a[i], &a[j]);
            }
        }
    }
}

void student::getdata() {
    cin.ignore(numeric_limits<streamsize>::max(), '\n'); // Clear input buffer
    cout << "Enter Name : ";
    getline(cin, name);
    cout << "Enter Roll No. : ";
    cin >> roll;
    cout << "Enter marks: ";
    cin >> marks;
}

int main() {
    int n, i, j;
    cout << "Enter number of students: ";
    cin >> n;

    student s[n], *p;
    p = &s[0];

    for (i = 0; i < n; i++) {
        s[i].getdata();
    }

    p = &s[0];
    s[0].putdata(p, n);

    for (int i = 0; i < n; i++) {
        s[i].print();
    }

    return 0;
}