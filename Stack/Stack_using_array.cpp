#include <iostream>
using namespace std;

#define n 10

class Stack
{
    int *arr;
    int top;

public:
    Stack()
    {
        arr = new int[n];
        top = -1;
    }

    void push(int x)
    {
        if (top == n - 1)
        {
            cout << "Stack has no space for new insertions." << endl;
            return;
        }
        top++;
        arr[top] = x;
    }

    void POP()
    {
        if (top == -1)
        {
            cout << "No elements in the stack!" << endl;
            return;
        }
        top--;
    }

    int TOP()
    {
        if (top == -1)
        {
            cout << "No element in stack" << endl;
            return -1;
        }

        return arr[top];
    }

    bool empty()
    {
        return top == -1;
    }
};

int main()
{
    Stack s;
    s.push(1);
    s.push(2);
    cout << s.TOP();
    s.POP();
    cout << s.TOP();
    s.POP();
    s.POP();
    cout << s.TOP();
    s.POP();
    s.POP();
    cout << s.TOP();
    s.POP();
    cout << s.empty();
}