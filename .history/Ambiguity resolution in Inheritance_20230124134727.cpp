#include <iostream>
using namespace std;

class Base1
{
protected:
    int studentid;

public:
    void getdata(int s)
    {
        studentid = s;
    }
};
class Base2
{
protected:
    string studentName;

public:
    void getdata(string n)
    {
        studentName = n;
    }
};

// syntax for multiple inheritance
// class Derived :public Base1 , public Base2{

// };

class Derived : public Base1, public Base2
{

public:
    void getdata(string n)
    {
        Base2::getdata(n);
    }
    void display()
    {
        cout << "Student id is " << studentid << endl;
        cout << "Student name is " << studentName << endl;
    }
};

int main()
{

    string studentName;

    cout << "Enter the student name : ";
    cin >> studentName;

    Derived d1;
    d1.getdata(studentName);

    d1.display();

    return 0;
}