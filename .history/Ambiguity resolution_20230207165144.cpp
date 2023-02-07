#include <iostream>
using namespace std;

/* what is ambiguity */
// When you derive classes, ambiguities can result if base and derived classes have members with the same names.

class Base1
{
public:
    void greet()
    {
        cout << "Hey how  are you?" << endl;
    }
};

class Base2
{
public:
    void greet()
    {
        cout << "hello how are you doin?" << endl;
    }
};

class Derived : public Base1, public Base2
{
    int a;

public:
    void greet()
    {
        Base2 ::greet();
    }
};

// Example no 2
class B
{
public:
    void say()
    {
        cout << "Hello world" << endl;
    }
};

class D : public B
{
    int a;
    // D's new say() method will override base class's say() method
public:
    void say()
    {
        cout << "Hello my beautiful people" << endl;
    }
};
int main()
{

    D d1;
    d1.say();
    Derived d;
    d.greet();

    return 0;
}