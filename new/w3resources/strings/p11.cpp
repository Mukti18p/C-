#include <iostream>
#include <cstring>
using namespace std;
string fun(string &res)
{
    int l = res.length();
    int a[l] = {0}, fre[l] = {0};
    int count = 0, k = -1;
    string temp = "";
    for (int i = 0; i < l; i++)
    {
        if (a[i] != -1)
        {
            for (int j = i + 1; j < l; j++)
            {
                if (res[i] == res[j])
                {
                    a[j] = -1;
                    fre[i]++;
                }
            }
        }
    }
    for (int i = 0; i < l; i++)
    {
        cout << fre[i] << endl;
    }
    cout << res << endl;

    int m = 0;
    string dummy;
    for (int i = 0; i < l; i++)
    {
        for (int j = i + 1; j < l; j++)
        {
            dummy = res[j];
            if (k <= fre[j])
            {
                temp.insert(m, dummy);
                temp.insert(m + 1, " "); 
                m += 2;
                k = fre[j];
            }
        }
    }
    return temp;
}
int main()
{
    int i, j = 0, l;

    string s, res, temp;
    getline(cin, s);
    l = s.length();
    for (i = 0; i < s.length(); i++)
    {
        if (s[i] == ' ' || i + 1 == l)
        {
            res = s.substr(j, i - j);
            temp = fun(res);
            j = i + 1;
        }
    }
    cout << temp << endl;
}
