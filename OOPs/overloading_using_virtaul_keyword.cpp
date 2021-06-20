#include <iostream>
using namespace std;

class base
{
public:
    virtual void printFunc()
    {
        cout << "This is the function of base class\n";
        //if we won't put virtual keyword it will execute method of base class.
    }
};

class derived : public base
{
public:
    void printFunc()
    {
        cout << "This is the function of derived class\n";
        //After putting virtual in front of base class function it will execute the method whose address is being passed at runtime.
        //if we put virtual in front of derived class function it will keep on executing the function of base class.
        cout << "Virtual keyword will help to dynamicall bind the function called at runtime, if we won't put virtual in from of base class function it won't call derived class's function with same name \n";
    }
};

int main()
{
    base *baseptr;
    derived d;
    baseptr = &d;
    //Here we passed the ref of derived class to base class
    baseptr->printFunc();
    return 0;
}