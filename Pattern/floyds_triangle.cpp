#include <iostream>
using namespace std;

int main()
{
    int row, col, i, j, count = 1;
    cin >> row >> col;
    for (i = 1; i <= row; i++)
    {
        for (j = 1; j <= i; j++)
        {
            cout << count;
            count++;
        }
        cout << endl;
    }
    return 0;
}