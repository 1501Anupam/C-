#include <iostream>
using namespace std;

int linear_Search(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
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
    cout << linear_Search(array, n, key);
    return 0;
}