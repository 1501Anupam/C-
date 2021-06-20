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

class derived3 : public derived2
{
public:
    void printOfDerived3Class()
    {
        cout << "This is the function of derived3 class.\n";
        cout << "This is hybrid inheritance in which there is mix of inheritance.\n";
        cout << "\n Class derived1 and derived2 are inheriting single base class which is an example of hierarchical inheritance, class derived3 inheriting class derived2 in single level inheritance.";
        cout << "\n So this example is depicting sinle and hierachical inheritance together.";
    }
};

int main()
{
    derived1 d1;
    derived2 d2;
    derived3 d3;
    d1.printFunc1();
    d1.printOfDerived1Class();
    d2.printFunc1();
    d2.printOfDerived2Class();
    d3.printFunc1();
    d3.printOfDerived2Class();
    d3.printOfDerived3Class();
    return 0;
}