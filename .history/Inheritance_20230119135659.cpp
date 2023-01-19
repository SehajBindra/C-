#include <iostream>
using namespace std;

/* Note:

Default visibility mode is private
Public Visibility Mode: Public members of the base class becomes Public members of the derived class
Private Visibility Mode: Public members of the base class become private members of the derived class
Private members are never inherited  */

// Base Class
// The base class is also called superclass or parent class
class Employee
{
public:
    int id;
    float salary;
    Employee(int inpId)
    {
        id = inpId;
        salary = 34.0;
    }
    Employee() {}
};

// Creating a Programmer class derived from Employee Base class
// derived class is also called a subclass or child class.
class Programmer : public Employee
{
public:
    int languageCode;
    Programmer(int inpId)
    {
        id = inpId;
        languageCode = 9;
    }
    void getData()
    {
        cout << id << endl;
    }
};

int main()
{
    Employee harry(1), rohan(2);
    cout << harry.salary << endl;
    cout << rohan.salary << endl;
    Programmer p(10);
    cout << p.languageCode << endl;
    cout << p.id << endl;
    p.getData();
    return 0;
}
