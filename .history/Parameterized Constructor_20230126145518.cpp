
#include <iostream>
using namespace std;

class Hello
{
    int a, b;

public:
    // constructor declaration and intialization
    Hello(int x, float y)
    {
        a = x;
        b = y;
    };
    // parameterized constructor as it takes two parameters or arguments

    void PrintNumber()
    {
        cout << "Your No is ";
        cout << a + b << endl;
    }
};

// scope resolution operator
// used to define a function outside a class
// Hello ::Hello(int x, float y)
// {
//     a = x;
//     b = y;
// };

int main()
{
    // implicit call basically means we can also insert values in objects.
    Hello h1(8, 16);
    h1.PrintNumber();

    // explicit call
    // Hello h2 = Hello(24, 32);
    // h2.PrintNumber();

    return 0;
}