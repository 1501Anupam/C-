#include <iostream>
using namespace std;

int fact(int num)
{
    int i, fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    return fact;
}

int main()
{
    int row;
    cout << "Enter number of rows ";
    cin >> row;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << fact(i) / (fact(i - j) * fact(j)) << " ";
        }
        cout << endl;
    }
    return 0;
}