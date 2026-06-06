#include <iostream>
using namespace std;

class Person
{
public:
    string name;

    void getName()
    {
        cout << "Enter Name: ";
        cin >> name;
    }
};

class Student : public Person
{
public:
    void display()
    {
        cout << "Name: " << name;
    }
};

int main()
{
    Student s;

    s.getName();
    cout << "                             " << endl;
    s.display();

    return 0;
}