#include <iostream>
using namespace std;

class base
{
private:
    int age;

public:
    void printFunc()
    {
        cout << "This is the function of base class\n";
    }
};

class derived1 : public base
{
public:
    void printOfDerived1Class()
    {
        cout << "This is the function of derived1 class\n";
    }
};

class derived2 : public derived1
{
public:
    void printOfDerived2Class()
    {
        cout << "This is the function of derived2 class.\n";
        cout << "This is an example of multi level inheritance.\n";
    }
};

int main()
{
    derived2 d;
    d.printFunc();
    d.printOfDerived1Class();
    d.printOfDerived2Class();
    return 0;
}