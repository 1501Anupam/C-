#include <iostream>
using namespace std;

int main()
{
    int num, i = 2;
    cout << "Enter a number";
    cin >> num;
    if (num > i)
    {
        if (num % i == 0)
        {
            cout << "Not prime!";
        }
        else
        {
            i = i + 1;
        }
    }
    cout << "prime number!";
    return 0;
}