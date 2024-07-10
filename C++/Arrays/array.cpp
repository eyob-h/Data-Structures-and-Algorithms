#include <iostream>
using namespace std;

int main()
{

    int A[5];
    int B[8] = {1, 2, 3, 4};
    int C[] = {1, 2, 3, 4, 5, 6};

    A[0] = 1;
    cout << A[3] << endl;
    cout << B[5] << endl;

    cout << "Array 2" << endl;
    for (int x = 0; x < sizeof(B) / 4; x++)
    {
        cout << B[x] << endl;
    }

    cout << "Array 3" << endl;
    for (int x : C)
    {
        cout << C[x] << endl;
    }
    return 0;
}