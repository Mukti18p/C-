#include<iostream>

class Complex
{
    float re;
    float im;
public:
    // Constructor declaration
    Complex(float x = 0, float y = 0);
    void add(Complex c);
    void print();
};
// Constructor definition
Complex::Complex(float x, float y)
{
    re = x;
    im = y;
}
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
    Complex c1(1.1, 1.1);
    Complex c2 = Complex(2.2, 2.2);
    Complex c3;
    c3.add(c1);
    c3.add(c2);
    c3.print();
    return 0;
}
