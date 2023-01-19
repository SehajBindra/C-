
#include <iostream>
using namespace std;

class Complex
{
    int a, b;

public:
    // Constructor is a special member function with the same name as of the class.
    //     // It is used to initialize the objects of its class
    //     // It is automatically invoked whenever an object is created
    // constructor Declaration
    Complex(void);

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << endl;
    }
};

// constructor intialization

Complex::Complex(void)
// This is a default constructor as it takes no parameters
{
    a = 8;
    b = 16;
}

int main()
{
    Complex c1;
    c1.printNumber();

    return 0;
};
