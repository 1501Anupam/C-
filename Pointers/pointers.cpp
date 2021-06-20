#include <iostream>
using namespace std;

int main()
{
    int a = 20;
    int *ptr = &a;
    cout << a << " " << ptr << " " << *ptr << " " << &a << endl;
    ptr++;
    cout << ptr << " " << *ptr << " " << &a;
    return 0;
}