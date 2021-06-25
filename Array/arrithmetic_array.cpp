//Arithmetic array is an array that contains atleast two integers and difference between the consecutive integers is equal.
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
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        sum = 0;
        for (int j = i; j < n; j++)
        {
            sum += array[j];
            cout << sum << " ";
        }
        cout << endl;
    }

    return 0;
}