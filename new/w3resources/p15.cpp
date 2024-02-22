#include <iostream>
#include <cstring>
using namespace std;
int main()
{
    string s, res = "",temp="";
    getline(cin, s);
    int a = 0, j = 0;
    for (int i = 0; a < s.length(); i++)
    {
        if (i % 2 == 0)
        {
             temp = s.at(a);
            res.insert(j, temp);
            a += 1;
            j++;
        }
        else
        {
            temp = s.at(a);
            res.insert(j, temp);
            j++;
            a += 3;
        }
    }
    cout << res << endl;
}