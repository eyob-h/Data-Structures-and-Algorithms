#include <iostream>
using namespace std;

void byValue(int x)
{
    x = x + 10; // changes only local copy
}

void byAddress(int *x)
{
    *x = *x + 10; // changes original via pointer
}

void byReference(int &x)
{
    x = x + 10; // changes original via reference
}

int main()
{
    int num = 10;

    byValue(num);
    cout << "After call by value: " << num << endl; // 10

    byAddress(&num);
    cout << "After call by address: " << num << endl; //  20

    byReference(num);
    cout << "After call by reference: " << num << endl; //  30

    return 0;
}