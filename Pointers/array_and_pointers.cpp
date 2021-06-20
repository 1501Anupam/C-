#include <iostream>
using namespace std;

int main()
{
    int arr[3] = {10, 20, 30};
    int *ptr = arr;
    cout << arr << " " << ptr << " " << *ptr << " " << &arr << endl;
    //arr by defaults holds the base address of an array
    cout << *ptr; // This is called dereferencing of pointer
    for (int i = 0; i < 3; i++)
    {
        cout << "\nValue of array at index " << (i + 1) << " is " << *ptr << endl;
        ptr++;
        // it will increment by the size of data type
    }
    for (int i = 0; i < 3; i++)
    {
        cout << "Value of array at index " << (i + 1) << " is " << *(arr + i) << endl;
        //*(arr + i) here arr+i is an indexing pointer so we don't need to increase as size of data type.
    }
    int b = 5;
    int *p = &b;
    int **q = &p;
    cout << **q << " " << *q << " " << &p << " " << *p;

    return 0;
}