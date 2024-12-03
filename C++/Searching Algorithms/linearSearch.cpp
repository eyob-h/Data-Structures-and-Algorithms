#include <iostream>
using namespace std;

int linearSearch(int arr[], int n, int target)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == target)
            return i;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91};
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int result = linearSearch(arr, n, target);

    if (result == -1)
        cout << "Element not found in array";
    else
        cout << "Element found at index: " << result;

    return 0;
}