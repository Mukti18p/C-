#include <cmath>
#include <cstdio>
#include<cstring>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;
typedef struct{
    int roll;
    int marks; 
    char dept[3];
}student;

// use varibale name insted of tagname in typedef structure


int main()
{
    int n;
    cin>>n;
   student *p=(student *)malloc(sizeof(student)*n);
    for(int i=0;i<n;i++)
    {
        cin>>(p+i)->roll>>(p+i)->marks>>(p+i)->dept;
        
    }
    int max=0,max1=0,max2=0,max3=0;
    for(int i=0;i<n;i++)
    {
        if(max<(p+i)->marks)
        {
            max=p[i].marks;
        }
    }
    cout<<max<<endl;
  
    for(int i=0;i<n;i++)
    {
        if(max1<p[i].marks && strcmp(p[i].dept,"CE")==0)
        {
            max1=p[i].marks;
           
        }
    }
    cout<<max1<<" "<<"CE"<<endl;
   
    for(int i=0;i<n;i++)
    {
        if(max3<p[i].marks && strcmp(p[i].dept,"EC")==0)
        {
            max3=p[i].marks;
        }
    }
    cout<<max3<<" "<<"EC"<<endl;
    
    for(int i=0;i<n;i++)
    {
        if(max2<p[i].marks && strcmp(p[i].dept,"IT")==0)
        {
            max2=p[i].marks;
            
        }
    }
    cout<<max2<<" "<<"IT"<<endl;

    
    delete p;
    
}
