
#include <iostream>
using namespace std;

class Hello
{
    int a, b;

public:
    Hello(int, float);
    // parameterized constructor as it takes two parameters or arguments
    // constructor declaration

    void PrintNumber()
    {
        cout << "Your No is ";
        cout << a + b << endl;
    }
};

Hello ::Hello(int x, float y)
{
    a = x;
    b = y;
};

int main()
{
    // implicit call
    Hello a(8, 16);
    a.PrintNumber();

    // explicit call

    Hello b = Hello(24, 32);
    b.PrintNumber();

    return 0;
}