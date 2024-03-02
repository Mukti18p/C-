#include <iostream>
#include <cstring>
#include <limits>
using namespace std;

void swap(char **p, char **p1) // Change the function signature to accept pointers to pointers
{
    char *temp = *p; // Change to a proper pointer initialization
    *p = *p1; // Swap pointers, not the strings
    *p1 = temp; // Swap pointers, not the strings
}

void sorting(char **ip, int n)
{
    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(ip[i], ip[j]) > 0 && *ip[i] != *ip[j] - 32)
            {
                swap(&ip[i], &ip[j]); // Pass pointers to pointers
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
