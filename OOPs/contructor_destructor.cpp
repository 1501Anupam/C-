#include <iostream>
using namespace std;

class Student
{
public:
    string name;

public:
    int rno;
    float marks;

    void getName(string n)
    {
        name = n;
        setName();
    }

    void setName()
    {
        cout << name;
    }
    void printDetails()
    {
        cout << "\n Name ";
        setName();
        cout << "\n Roll number is " << rno;
        cout << "\n Marks " << marks;
    }
    Student()
    {
        cout << "Hi I am default constructor!\n";
    }
    Student(string name, int rn, float marks)
    {
        cout << "Hi I am Parameterized constructor!\n";
        name = name;
        rno = rn;
        marks = marks;
        cout << name << " " << rno << " " << marks << endl;
    }

    Student(Student &b)
    {
        cout << "\nHi I am copy constructor! And I do deep copy of objects means copied values as well as reference, if u won't create me then the default copy constructor will do shallow copy means copying values only.\n";
        name = b.name;
        rno = b.rno;
        marks = b.marks;
        cout << name << " " << rno << " " << marks;
    }

    bool operator==(Student &b)
    {
        if (name == b.name && rno == b.rno && marks == b.marks)
        {
            return true;
        }
        else
        {
            return false;
        }
    }

    ~Student()
    {
        cout << "\n Hi I am destructor and I got invoked when the object is destroyed in order to free the memory. I got invoked in reverse order";
    }
};

int main()
{
    Student a;
    cout << "Enter the details of the student\n";
    cout << "Name: ";
    a.getName("Anupam");
    cout << "\nEnter the roll number: ";
    cin >> a.rno;
    cout << "\nEnter the marks: ";
    cin >> a.marks;
    Student b("Roman", 1, 23);
    b.printDetails();
    Student c = b;

    if (c == b)
    {
        cout << "\nBoth student's have same attributes";
    }
    else
    {
        cout << "\nDifferent Attributes!";
    }
    return 0;
}
