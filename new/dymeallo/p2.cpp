#include <iostream>
#include <cstring>
using namespace std;
struct st
{
    char name[20];
    int id;
};
struct stu
{
    char name[20];
    int id;
};
struct st *p, *ptr;
struct stu *p1, *ptr1;
struct st sorting(struct st *p, struct stu *p1, int n)
{
    cout << "After sorting:" << endl;
    int temp = 0;
    char dummy[100];
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp((p+i)->name, (p+j)->name) > 0)
            {
                strcpy(dummy, (p+i)->name);
                strcpy((p+i)->name, (p+j)->name);
                strcpy((p+j)->name, dummy);
                temp = (p+i)->id;
                (p+i)->id = (p+j)->id;
                (p+j)->id = temp;
            } 
        }
    }
     for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp((p1+i)->name, (p1+j)->name) > 0)
            {
                strcpy(dummy, (p1+i)->name);
                strcpy((p1+i)->name, (p1+j)->name);
                strcpy((p1+j)->name, dummy);
                temp = (p1+i)->id;
                (p1+i)->id = (p1+j)->id;
                (p1+j)->id = temp;
            } 
        }
    }
}
struct st swap(struct st *p, struct stu *p1, int n)
{
    int temp = 0;
    char dummy[100];
    for (int i = 0; i < n; i++)
    {
        strcpy(dummy, p->name);
        strcpy(p->name, p1->name);
        strcpy(p1->name, dummy);
        temp = p->id;
        p->id = p1->id;
        p1->id = temp;
        p++;
        p1++;
    }
}
int main()
{
    int i, j;
    int n;
    cin >> n;
    p = (struct st *)malloc(n * sizeof(struct st));
    ptr = p;
    p1 = (struct stu *)malloc(n * sizeof(struct stu));
    ptr1 = p1;
    for (i = 0; i < n; i++)
    {
        cout << "For first st" << endl;
        cin >> p->name;
        cin >> p->id;
        p++;
        cout << "For second st" << endl;
        cin >> p1->name;
        cin >> p1->id;
        p1++;
    }
    p = ptr;
    p1 = ptr1;
    cout << "first::" << endl;
    for (i = 0; i < n; i++)
    {
        cout << p->name << endl;
        cout << p->id << endl;
        p++;
    }
    p = ptr;
    cout << "second::" << endl;
    for (i = 0; i < n; i++)
    {
        cout << p1->name << endl;
        cout << p1->id << endl;
        p1++;
    }
    p1 = ptr1;
    swap(p, p1, n);
    p = ptr;
    p1 = ptr1;
    cout << "first::" << endl;
    for (i = 0; i < n; i++)
    {
        cout << p->name << endl;
        cout << p->id << endl;
        p++;
    }
    p = ptr;
    cout << "second::" << endl;
    for (i = 0; i < n; i++)
    {
        cout << p1->name << endl;
        cout << p1->id << endl;
        p1++;
    }
    p1 = ptr1;
    sorting(p, p1, n);
    p = ptr;
    p1 = ptr1;
    cout << "first::" << endl;
    for (i = 0; i < n; i++)
    {
        cout << p->name << endl;
        cout << p->id << endl;
        p++;
    }
    p = ptr;
    cout << "second::" << endl;
    for (i = 0; i < n; i++)
    {
        cout << p1->name << endl;
        cout << p1->id << endl;
        p1++;
    }
    p1 = ptr1;
}