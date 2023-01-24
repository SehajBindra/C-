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
    int studentName;

public:
    void getdata2(int n)
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
    void display()
    {
        cout << "Student id is " << studentid << endl;
        cout << "Student name is " << studentName << endl;
    }
};

int main()
{
    int studentid, studentName;
    cout << "Enter the student id : " << studentid << endl;
    cout << "Enter the student name : " << studentName << endl;
    Derived d1;
    d1.getdata(studentid);
    d1.getdata2(studentName);
    d1.display();

    return 0;
}