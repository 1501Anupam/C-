// We will be able to find the minimum element in the first comparision.
// First half will be the sorted array and second half will always be the unsorted array.

#include <iostream>
using namespace std;

int main()
{
    int n;
    cout << "Enter the size of array: ";
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (arr[j] < arr[i])
            {
                int temp = arr[j];
                arr[j] = arr[i];
                arr[i] = temp;
            }
        }
        // cout << arr[i] << " "; if try to print here the last element will not be printed.
    }
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
}