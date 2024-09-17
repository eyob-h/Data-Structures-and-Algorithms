#include <iostream>

void change(int x)
{
    x = 8;
    std::cout << "Value of x is: " << x << '\n';
}

void change_with_ptr(int *x)
{
    *x = 8;
    std::cout << "Value of x is: " << *x << '\n';
}

int main()
{
    // Without pointer
    int a = 4;
    change(a);
    std::cout << "The value of a is: " << a << '\n';

    // With pointer
    int b = 4;
    change_with_ptr(&b);
    std::cout << "The value of b is: " << b << '\n';

    // Dynamically allocated
    int *c = new int(12);
    change_with_ptr(c);
    std::cout << "The value of c is: " << *c << '\n';
    delete c;

    return 0;
}