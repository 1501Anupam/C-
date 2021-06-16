#include <iostream>
using namespace std;

int main()
{
    int n, maxNum, minNum;
    cout << "Enter the number of elements";
    cin >> n;
    int array[n];
    for (int i = 0; i <= n; i++)
    {
        cin >> array[i];
    }
    maxNum = INT_MIN;
    minNum = INT_MAX;
    for (int j = 0; j <= n; j++)
    {
        maxNum = max(maxNum, array[j]);
        minNum = min(minNum, array[j]);
    }
    cout << "Max element is: " << maxNum << " min element is: " << minNum;
}