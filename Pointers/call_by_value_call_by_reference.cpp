#include <iostream>
using namespace std;

void swap_by_value(int a, int b)
{
    int temp = a;
    a = b;
    b = temp;
}
void swap_by_reference(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}

int main()
{
    int a = 20, b = 30;
    cout << "Originalyy the values are " << a << " and " << b;
    swap_by_value(a, b);
    cout << "\nAfter swaping by values are " << a << " and " << b;
    swap_by_reference(&a, &b);
    cout << "\nAfter swaping by reference " << a << " and " << b;
    return 0;
}