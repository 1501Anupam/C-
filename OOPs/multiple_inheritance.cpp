#include <iostream>
using namespace std;

class base1
{
private:
    int age;

public:
    void printFunc1()
    {
        cout << "This is the function of base1 class\n";
    }
};

class base2
{
private:
    int age;

public:
    void printFunc2()
    {
        cout << "This is the function of base2 class\n";
    }
};

class derived1 : public base1, public base2
{
public:
    void printOfDerivedClass()
    {
        cout << "This is the function of derived class\n";
        cout << "This is muliple inheritance in which there are multiple base classes.\n";
    }
};

int main()
{
    derived1 d;
    d.printFunc1();
    d.printFunc2();
    d.printOfDerivedClass();
    return 0;
}