#include <iostream>
using namespace std;

int main()
{
    int a = 5;
    int &ref = a;
    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;

    ref++;
    cout << "a: " << a << endl;
    cout << "ref: " << ref << endl;
    cout << "Address of a:   " << &a << endl;
    cout << "Address of ref: " << &ref << endl;

    return 0;
}