#include <iostream>
using namespace std;

class Sum
{
public:
    void add()
    {
        cout << "This will add two given numbers.\n";
    }
    void add(int a, int b)
    {
        cout << "The sum of " << a << " and " << b << " is " << a + b;
    }
    void add(double a, double b)
    {
        cout << "\nThe sum of " << a << " and " << b << " is " << a + b;
    }
};

int main()
{
    Sum obj;
    obj.add();
    obj.add(2, 4);
    obj.add(4.5, 8.9);
    return 0;
}