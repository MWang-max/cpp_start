#include <iostream>

int a;

int main()
{
    a = 2;
    std::cout << a << std::endl;
    int b = 2 + 3;
    std::cout << b << std::endl;
    int c = a * b;
    std::cout << c << std::endl;
    a = 0;
    std::cout << c << std::endl; // still 10, as c was already compiled before value of a changed
    return 0;
}
