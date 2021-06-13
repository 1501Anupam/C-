#include <iostream>
using namespace std;

int main()
{
    int a;
    float b;
    char c;
    double d;
    bool e;
    signed int si;
    unsigned int ui;
    short int shi;
    long int li;

    cout << "The size of int is: " << sizeof(a) << endl;
    cout << "The size of float is: " << sizeof(b) << endl;
    cout << "The size of char is: " << sizeof(c) << endl;
    cout << "The size of double is: " << sizeof(d) << endl;
    cout << "The size of bool is: " << sizeof(e) << endl;
    cout << "The size of signed int is: " << sizeof(si) << endl;
    cout << "The size of unsigned int is: " << sizeof(ui) << endl;
    cout << "The size of short int is: " << sizeof(shi) << endl;
    cout << "The size of long int is: " << sizeof(li) << endl;
}