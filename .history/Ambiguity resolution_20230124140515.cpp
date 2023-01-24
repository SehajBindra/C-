#include <iostream>
using namespace std;

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
    B b;
    b.say();

    D d1;
    d1.say();
    Derived d;
    d.greet();

    return 0;
}