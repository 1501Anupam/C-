#include <iostream>
using namespace std;

class Student
{
public:
    string name;
    int rno;
    float marks;

    void printDetails()
    {
        cout << "\n Name " << name;
        cout << "\n Roll number is " << rno;
        cout << "\n Marks " << marks;
    }
};

int main()
{
    Student student[3];
    cout << "Enter the details of the students\n";
    for (int i = 0; i < 3; i++)
    {
        cout << "\nEnter the name: ";
        cin >> student[i].name;
        cout << "\nEnter the roll number: ";
        cin >> student[i].rno;
        cout << "\nEnter the marks: ";
        cin >> student[i].marks;
    }

    cout << "The details u have entered so far are: ";
    for (int i = 0; i < 3; i++)
    {
        student[i].printDetails();
    }
    return 0;
}
