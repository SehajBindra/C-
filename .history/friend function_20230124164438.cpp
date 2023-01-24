// Friend function
// example 1
#include <iostream>
using namespace std;

class Complex
{

    int a, b;
    // Can be declared under the public or private access modifier,
    //  it will not make any difference
    friend Complex Sum(Complex c1, Complex c2);

public:
    void getdata()
    {
        cout << "\n Enter the  value of a -   ";
        cin >> a;
        cout << "\n Enter the value of b -  ";
        cin >> b;
    }

    void printNo()
    {
        cout << "\n  The value of a is : "
             << a << endl;
        cout << "\n  The value of b is : "
             << b << endl;
    }
};

// so whenever I want to access private data members of a particular class
//  I have to use friend function

// cannot be defined in the scope of class

Complex Sum(Complex c1, Complex c2)
// it takes object as arguments or parameters
{

    Complex c3;
    c3.a = c1.a + c2.a;
    c3.b = c1.b + c2.b;

    // c1.a = a for ex - a = 2
    // c2.b = b -------- b = 4
    // c3.getdata((2+4) , (2+4) ) = 6 , 6
    // the value of a is 6
    // the value of b is 6
    return c3;
}

int main()
{
    Complex c1, c2, sum;

    c1.getdata();

    c2.getdata();

    // c1.sum() == Invalid
    sum = Sum(c1, c2);
    sum.printNo();

    return 0;
};
