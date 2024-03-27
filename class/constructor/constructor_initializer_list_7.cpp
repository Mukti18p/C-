#include<iostream> 
class Test
{ 
    const int t;
    int i;
public: 
    Test(int num):t(num)
    {   
        // error:  t = num;
        i = num;
    }
    void print();
}; 
void Test::print()
{
    std::cout << "t = " << t << ", i = " << i << std::endl ;
} 
int main()
{ 
    Test t1(10); 
    t1.print();
    return 0; 
}
