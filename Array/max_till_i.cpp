//This program is to find the maximum elements of an array till i.
#include <iostream>
using namespace std;

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
    int maxNum = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        maxNum = max(maxNum, array[i]);
        cout << maxNum << " ";
    }

    return 0;
}