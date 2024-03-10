#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
class rec
{
    int x[4];
    int y[4];

public:
    void getdata();
    void move(char, rec, int);
    void putdata();
    void move1(char c, char d, char e, int n1, rec r);
};
void rec::getdata()
{
    for (int i = 0; i < 4; i++)
    {
        cin >> x[i];
        cin >> y[i];
    }
}
void rec::putdata()
{
    for (int i = 0; i < 4; i++)
    {
        cout << x[i];
        cout << y[i] << endl;
    }
}
void rec::move(char c, rec r, int n)
{
    if (c == 'L')
    {
        for (int i = 0; i < 4; i++)
        {
            x[i] -= n;
        }
        r.putdata();
    }
    else if (c == 'R')
    {
        for (int i = 0; i < 4; i++)
        {
            x[i] += n;
        }
        r.putdata();
    
    }
    else if (c == 'U')
    {
        for (int i = 0; i < 4; i++)
        {
            y[i] += n;
        }
        r.putdata();
    
    }
    else
    {
        for (int i = 0; i < 4; i++)
        {
            y[i] -= n;
        }
        r.putdata();
    
    }
}
void rec::move1(char a, char b, char c, int n1, rec r)
{
    for (int i = 0; i < 4; i++)
    {
        if (r.y[i] != 0)
        {
            if (c == 'T')
            {
                if (b == 'D')
                    r.y[i] -= n1;
                else
                    r.y[i] += n1;
            }
            else
            {
                if (b == 'I')
                    r.y[i] -= n1;
                else
                    r.y[i] += n1;
            }
            
        }
        else
        {
             if (c == 'L')
            {
                if (b == 'D')
                    r.x[i] += n1;
                else
                    r.x[i] -= n1;
            }
            else
            {
                if (b == 'I')
                    r.x[i] += n1;
                else
                    r.x[i] -= n1;
            }
          
        }
    }
}
int main()
{
    rec r;
    r.getdata();
    char c, d, e, f;
    int n, n1, count = 0, num;
    cin >> num;
    while (count != num)
    {
        cin >> c;
        if (c == 'L' || c == 'R' || c == 'D' || c == 'U')
        {
            cin >> n;
            r.move(n, r, c);
            r.putdata();
        }
        else
        {
            cin >> d >> e >> n1;
            r.move1(c, d, e, n1, r);
        }
        count++;
    }
    r.putdata();
}
// A I T 5