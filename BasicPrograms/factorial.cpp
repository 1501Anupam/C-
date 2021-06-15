#include <iostream>
using namespace std;

void fact(int num)
{
    int i, fact = 1;

    for (int i = 1; i <= num; i++)
    {
        fact *= i;
    }
    cout << "Factorial of " << num << " is " << fact;
}

int main()
{
    int num;
    cout << "Enter a number ";
    cin >> num;
    fact(num);
    return 0;
}