#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int *ptr = &a;

    cout << "Variable Value " << a << endl;

    cout << "Variable Address " << &a << endl;
    cout << "Pointer Address " << &ptr << endl;

    cout << "Pointer Value " << ptr << endl;
    cout << "Pointer Dereference " << *ptr << endl;

    int year = 2024;
    int *year_ptr = &year;

    cout << "Year" << year << endl;
    cout << "Year Address" << &year << endl;
    cout << "Pointer" << year_ptr << endl;
    cout << "Pointer Dereference" << *year_ptr << endl;

    return 0;
}