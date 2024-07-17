#include <iostream>
using namespace std;

int main()
{

    int arr[3] = {1, 2, 3};
    int *ptr;
    // ptr = arr;
    ptr = &arr[0];

    for (int i = 0; i < 3; i++)
        cout << ptr[i] << endl;
    cout << "========================";

    // Dynamically allocating an array in heap memory
    int *h_ptr;
    h_ptr = new int[5];
    h_ptr[0] = 1;
    h_ptr[1] = 8;
    h_ptr[2] = 7;
    h_ptr[3] = 4;
    h_ptr[4] = 5;

    for (int i = 0; i < 5; i++)
        cout << h_ptr[i] << endl;

    return 0;
}