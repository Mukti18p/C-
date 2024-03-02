#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
 
 
 //Time complexity problem still not solvve

int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n;
    cin>>n;
    int *ptr,temp=0;
    ptr=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
    {
        cin>>ptr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(ptr[i]>ptr[j])
            {
                temp=ptr[i];
                ptr[i]=ptr[j];
                ptr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<ptr[i]<<" ";
    }
    delete ptr;
    return 0;
}