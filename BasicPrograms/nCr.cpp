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
    int n, r;
    cout << "Enter numbers n and r ";
    cin >> n >> r;
    int nCr = fact(n) / (fact(n - r) * fact(r));
    cout << nCr;
    return 0;
}