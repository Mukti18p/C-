#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

void swap(char **p, char **p1) 
{
    char *temp = *p; 
    *p = *p1; 
    *p1 = temp; 
}
void sorting(char **ip, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(ip[i], ip[j]) > 0 && *ip[i] != *ip[j] - 32)
            {
                swap(&ip[i], &ip[j]); 
            }
        }
    }
}

int main()
{
    int n;
    cin >> n;
    char **ip;
    ip = new char *[n];

    for (int i = 0; i < n; i++)
    {
        ip[i] = new char[100]; 
    }
    for (int i = 0; i < n; i++)
    {
        cin >> ip[i];
    }
    sorting(ip, n);
    for (int i = 0; i < n; i++)
    {
        cout << ip[i] << endl;
    }
    delete[] ip;
}
