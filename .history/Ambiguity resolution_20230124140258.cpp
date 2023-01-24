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

int main()
{
    // Ambibuity 1
    // Base1 b1;
    // Base2 b2;
    // b1.greet();
    // b2.greet();
    Derived d;
    d.greet();

    return 0;
}