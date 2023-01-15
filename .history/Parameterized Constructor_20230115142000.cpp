// #include <iostream>
// using namespace std;

// class Complex
// {
//     int a, b;

// public:
//     Complex(int, int); // Constructor declaration

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << endl;
//     }
// };

// Complex ::Complex(int x, int y) // ----> This is a parameterized constructor as it takes 2 parameters
// {
//     a = x;
//     b = y;
//     // cout<<"Hello world";
// }

// int main()
// {
//     // Implicit call
//     Complex a(4, 6);
//     a.printNumber();

//     // Explicit call
//     Complex b = Complex(5, 7);
//     b.printNumber();

//     return 0;
// }

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
        cout << "Your No is" << a + b << endl;
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