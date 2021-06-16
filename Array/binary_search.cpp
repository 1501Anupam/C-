#include <iostream>
using namespace std;

int binary_Search(int arr[], int n, int key)
{
    int start = 0, end = n, mid;
    while (start <= end)
    {
        mid = (start + end) / 2;
        if (key == arr[mid])
        {
            return mid;
        }
        else if (key > arr[mid])
        {
            start = mid + 1;
        }
        else
        {
            end = mid - 1;
        }
    }

    return -1;
}

int main()
{
    int key, n;
    cout << "Enter the size of array: ";
    cin >> n;
    int array[n];
    cout << "\n Enter the elements of array\n";
    for (int i = 0; i < n; i++)
    {
        cin >> array[i];
    }
    cout << "Enter the element to be searched: ";
    cin >> key;
    cout << binary_Search(array, n, key);
    return 0;
}