#include <cmath>
#include <cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
//a
//A
//a
//a
void swap(char **ip,char ** iq)
{
    char*temp=*ip;
    *ip=*iq;
    *iq=temp;
}
void sorting(char **ip,int n)
{
    char *t , *t1;
    for(int i=0;i<n;i++)
    {
        
        for(int j=i+1;j<n;j++)
        {
            if(ip[i]<ip[j] && !(*ip[j]<=122 && *ip[j]>=97)  &&!(*ip[i]<=122 && *ip[i]>=97))
            {
                swap(&ip[i],&ip[j]);
            }
        }
        
        
    }
    for(int i=0;i<n;i++)
    {
        int t=0,k=0;
       
         for(int j=i+1;j<n;j++)
        {
            if(*ip[j]==*ip[i]+32)
            {
               k=i+1;
               while(j!=k)
               {
                    swap(&ip[j],&ip[j-1]);
                    j--;
               }
            }
        }
    }
    for(int i=0;i<n;i++)
    {
        int flag=0;
        if(*ip[i]<=122 && *ip[i]>=97)
        {
            for(int j=0;j<i;j++)
            {
                if(*ip[j]==*ip[i]-32)
                {
                    flag=1;
                    break;
                }
            }
            if(flag)
            {
                int j=i;
                while(j!=0)
                {
                    swap(&ip[j],&ip[j-1]);
                    j--;
                }
            }
        }
    }
   int i=0;
        while(*ip[i]>=97 && *ip[i]<=122)
        {
            i++;
        }
        for(int j=0;j<i;j++)
        {
            for(int k=j+1;k<i;k++)
            {
                    if(ip[i]<ip[j])
                    {
                        swap(&ip[j],&ip[k]);
                    }
            }
        }


}
int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */ 
    int n;
    cin>>n;
    cout<<n;
 
    char **ip=new char*[n];
    for(int i=0;i<n;i++)
    {
        ip[i]=new char[100];
    }
    for(int i=0;i<n;i++)
    {
        cin.getline(ip[i],100);
    }
    sorting(ip,n);
    for(int j=0;j<n;j++)
    {
        cout<<ip[j]<<endl;
    }
}
