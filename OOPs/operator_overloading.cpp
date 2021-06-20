#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;

public:
    Complex(int r, int i)
    {
        real = r;
        imag = i;
    }
    Complex() {}

    Complex operator+(Complex &obj)
    {
        Complex res;
        res.imag = imag + obj.imag;
        res.real = real + obj.real;
        return res;
    }

    void display()
    {
        cout << real << " + i" << imag;
    }
};

int main()
{
    Complex obj1(4, 5), obj2(3, 4);
    Complex obj3 = obj1 + obj2;
    obj3.display();
    return 0;
}
