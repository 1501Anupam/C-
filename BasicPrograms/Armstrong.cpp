#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, sum = 0, rem;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        sum = sum + pow(rem, 3);
        n = n / 10;
    }

    if (temp == sum)
    {
        cout << "Number is Armstrong!";
    }
    else
    {
        cout << "Not a Armstrong!";
    }
    return 0;
}