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

class derived : public base
{
public:
    void printOfDerivedClass()
    {
        cout << "This is the function of derived class\n";
        cout << "This is an example of single level inheritance\n";
    }
};

int main()
{
    derived d;
    d.printFunc();
    d.printOfDerivedClass();
    return 0;
}