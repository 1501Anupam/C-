#include <iostream>
using namespace std;

void prime(int a, int b)
{
    int j;
    for (int i = a; i <= b; i++)
    {
        for (j = 2; j < i; j++)
        {
            if (i % j == 0)
            {
                break;
            }
        }
        if (i == j)
        {
            cout << i << endl;
        }
    }
}
int main()
{
    int a, b;
    cout << "Enter two numbers";
    cin >> a >> b;
    prime(a, b);
    return 0;
}
