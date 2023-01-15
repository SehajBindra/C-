// #include <iostream>
// using namespace std;

// class Constructor
// {
//     int a, b;

// public:
//     // constructor declaration
//     Constructor(int, float);

//     void AddNo(void)
//     {
//         cout << "enter the first number :";
//         cin >> a;

//         cout << "enter the second number :";

//         cin >> b;
//     }

//     void PrintNo()
//     {
//         cout << "Your No is ";
//         cout << a + b << endl;
//     }
// };

// Constructor ::Constructor(int x, float y)
// {
//     a = x;
//     b = y;
// };

// Constructor ::Constructor(int x) {
//    a = x;
//    b = 0;
// };

// int main()
// {
//     Constructor c1(4, 8);
//     c1.AddNo();
//     c1.PrintNo();

//     return 0;
// };

#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // intializing and declaration
    // so constructor overloading is basically when
    // there is multiple constructors inside the same function
    Complex()
    {
        a = 0;
        b = 0;
    }

    Complex(int x, int y)
    {
        a = x;
        b = y;
    }

    Complex(int x)
    {
        a = x;
        b = 0;
    }

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << endl;
    }
};

int main()
{
    Complex c1(4, 6);
    c1.printNumber();

    Complex c2(5);
    c2.printNumber();

    Complex c3;
    c3.printNumber();
    return 0;
}
