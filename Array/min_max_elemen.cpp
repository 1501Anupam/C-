#include <iostream>
using namespace std;

int main()
{
    int n, max, min;
    cout << "Enter the number of elements";
    cin >> n;
    int array[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> array[i];
    }
    max = array[0];
    min = array[0];
    for (int j = 0; j <= n; j++)
    {
        if (array[j] > max)
        {
            max = array[j];
        }
        if (array[j] < min)
        {
            min = array[j];
        }
    }
    cout << "Max element is: " << max << " min element is: " << min;
}