#include <bits/stdc++.h>
using namespace std;

int main() {
	// your code goes here
    char b='A';
    char a[27];
    for(int i=0;i<26;i++)
    {
        a[i]=b;
        b++;
    }
    a[26]='\0';
    int t;
    cin>>t;
    int n,t1,t2,f=0;
   
    for(int i=0;i<t;i++)
    {
        t1=0,t2=0;
        cin>>n;
       
        char *p=new char(n+1);
        char *c=new char(n+1);
        cin>>p;
        cin>>c;
        for(int k=0;k<n;k++)
        {
                for(int j=0;j<27;j++)
                {
                    if(a[j]==p[k])
                    {
                        t1=j;
                        
                    }
                    if(a[j]==c[k])
                    {
                        t2=j;
                        
                    }
                }
                f=0;
                if(t1!=t2)
                {
                    while(t1!=t2)
                    {
                        if(t1<=25)
                        {
                        t1=t1+3;
                        f++;
                        }
                        else
                        {
                            t1=t1-26;
                        }
                        
                    }
                   std::cout<<f<<" ";
                }
                else
                {
                    std::cout<<"0"<<" ";
                }
        }
    }
    
}
// a b c d e f g h i j k l m n o p q r s t u v w x y z 
