#include <iostream>
using namespace std;

int binarySearch(int arr[], int n, int target)
{
    int left = 0;
    int right = n - 1;

    while (left <= right)
    {
        int mid = left + (right - left) / 2;

        if (arr[mid] == target)
            return mid;

        if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1;
}

int main()
{
    int arr[] = {2, 5, 8, 12, 16, 23, 38, 56, 72, 91}; // Must be sorted
    int n = sizeof(arr) / sizeof(arr[0]);

    int target;
    cout << "Enter number to search: ";
    cin >> target;

    int result = binarySearch(arr, n, target);

    if (result == -1)
        cout << "Element not found in array";
    else
        cout << "Element found at index: " << result;

    return 0;
}