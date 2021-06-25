//Subarray is a continuous sequence of an array where as in subsequence it is not mendatory that the elements are placed continuously.
//Number of possible sub arrays is (n*(n+1))/2
//Number of possible subsequence is pow(2,n);
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