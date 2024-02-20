#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    unsigned long long int n,c=0;
    cin>>n;
    
    while(n!=1)
    {
        if(n%2==0){
            n=n/2;
            c++;
        }
        else
        {
            
            if(n%4 != 3 || n==3)
            {
            n=n-1;
            c++;
            }
            else
            {
                n++;
                c++;
            }
        }
    }
    cout<<c<<endl;  
    return 0;

}
