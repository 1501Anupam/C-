#include <iostream>
using namespace std;

int main()
{
    int n, rev = 0, rem;
    cin >> n;
    int temp = n;
    while (n > 0)
    {
        rem = n % 10;
        rev = rem + (rev * 10);
        n = n / 10;
    }

    if (temp == rev)
    {
        cout << "Number is Palindrome!";
    }
    else
    {
        cout << "Not a palindrome!";
    }
    return 0;
}