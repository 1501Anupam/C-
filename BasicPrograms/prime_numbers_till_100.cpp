#include <iostream>
using namespace std;

int main()
{
    int i, counter = 0;
    for (int a = 1; a < 100; a++)
    {
        for (i = 2; i < a; i++)
        {
            if (a % i == 0)
            {
                break;
            }
        }
        if (a == i)
        {
            cout << a << endl;
            counter++;
        }
    }

    cout << counter;
    return 0;
}