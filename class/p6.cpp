#include <iostream>
#include <cstring>
#include <limits>
using namespace std;
class abc {
private:
    int x;
    int y;
    static int x1;
    static int y1;

public:
    void getdata();
    void putdata();
    static abc multi(abc n, abc n1);
    static void put( abc &c);
    abc sum(abc n, abc n1);
    void subs(abc &n, abc &n1, abc &sub);
};

int abc::x1 = 0;
int abc::y1 = 0;

void abc::getdata() {
    cout << "Enter the value of x :";
    cin >> x;
    cout << "Enter the value of y : ";
    cin >> y;
}

void abc::putdata() {
    cout << "The values are \nX = " << x << "\nY = " << y;
}

abc abc::sum(abc n, abc n1) {
    abc s;
    s.x = n.x + n1.x;
    s.y = n.y + n1.y;
    return s;
}

void abc::subs(abc &n, abc &n1, abc &sub) {
    sub.x = n.x - n1.x;
    sub.y = n.y - n1.y;
}

abc abc::multi(abc n, abc n1) {
    abc c;
    c.x1 = n.x * n1.x;
   
    c.y1 = n.y * n1.y;
     c.y1 *= -1;
    return c;
}

void abc::put( abc &c) 
{
    cout << "x=" << c.x1 << endl;
    cout << "y=" << c.y1 << endl;
}

int main() {
    abc n, n1, sum, sub, c;

    n.getdata();
    n1.getdata();

    n.putdata();
    n1.putdata();

    sum = n.sum(n, n1);
    sum.putdata();

    n.subs(n, n1, sub);
    sub.putdata();

    c = abc::multi(n, n1);
    abc::put(c);

    return 0;
}