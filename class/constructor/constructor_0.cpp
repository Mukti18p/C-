#include<iostream>

class Complex
{
    float re;
    float im;
public:
    void add(Complex c);
    void print();
};
void Complex::add(Complex c)
{
    re += c.re;
    im += c.im;
}
void Complex::print()
{
    std::cout << re << " + j";
    std::cout << im << std::endl;
}

int main()
{
    Complex c1;
    c1.print();
    return 0;
}
