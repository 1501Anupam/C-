#include <iostream>
using namespace std;

class base
{
private:
    int age;

public:
    void printFunc1()
    {
        cout << "This is the function of base class\n";
    }
};

class derived1 : public base
{
private:
    int age;

public:
    void printOfDerived1Class()
    {
        cout << "This is the function of derived1 class\n";
    }
};

class derived2 : public base
{
public:
    void printOfDerived2Class()
    {
        cout << "This is the function of derived2 class.\n";
        cout << "This is hierarchical inheritance in which there are multiple derived classes from a single base class.\n";
    }
};

int main()
{
    derived1 d1;
    derived2 d2;
    d1.printFunc1();
    d1.printOfDerived1Class();
    d2.printFunc1();
    d2.printOfDerived2Class();
    return 0;
}