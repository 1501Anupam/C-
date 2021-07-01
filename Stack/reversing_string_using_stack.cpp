#include <iostream>
#include <stack>
using namespace std;

void reverseString(string s)
{
    stack<string> myStack;
    for (int i = 0; i < s.length(); i++)
    {
        string word = "";
        while (s[i] != ' ' && i < s.length())
        {
            word += s[i];
            i++;
        }
        myStack.push(word);
    }

    while (!myStack.empty())
    {
        cout << myStack.top() << " ";
        myStack.pop();
    }
    cout << endl;
}

int main()
{
    string s = "Hey, how are you?";
    cout << s << endl;
    reverseString(s);
    return 0;
}
