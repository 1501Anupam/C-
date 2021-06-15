#include <iostream>
using namespace std;

void fib(int num)
{
    int first = 0, second = 1, third;

    for (int i = 1; i <= num; i++)
    {
        cout << first << endl;
        third = first + second;
        first = second;
        second = third;
    }
}

int main()
{
    int num;
    cout << "Enter the last digit upto you want to print the series";
    cin >> num;
    fib(num);
    return 0;
}