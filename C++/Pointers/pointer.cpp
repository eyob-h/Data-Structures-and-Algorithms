#include <iostream>
using namespace std;

int main()
{

    int a = 5;
    int *ptr = &a;
    
    
    cout <<"Variable Value "<<a << endl;
    
    cout <<"Variable Address "<<&a << endl;
    cout <<"Pointer Address "<< &ptr << endl;
    
    cout <<"Pointer Value "<< ptr<< endl;
    cout <<"Pointer Dereference "<< *ptr << endl;

    return 0;
}