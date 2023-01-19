// #include <iostream>
// using namespace std;

// // Forward declaration

// class Complex;

// class Calculator
// {
// public:
//     int add(int a, int b)
//     {
//         return (a + b);
//     }

//     int sumRealComplex(Complex, Complex);
//     // declaring Complex , Complex because we are yet to define the
//     // class
//     int sumCompComplex(Complex, Complex);
// };

// class Complex
// {
//     int a, b;
//     // Individually declaring functions as friends
//     // friend int Calculator ::sumRealComplex(Complex, Complex);
//     // friend int Calculator ::sumCompComplex(Complex, Complex);

//     // Aliter: Declaring the entire calculator class as friend
//     friend class Calculator;

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// int Calculator ::sumRealComplex(Complex o1, Complex o2)
// {
//     return (o1.a + o2.a);
// }

// int Calculator ::sumCompComplex(Complex o1, Complex o2)
// {
//     return (o1.b + o2.b);
// }

// int main()
// {
//     Complex o1, o2;
//     o1.setNumber(1, 4);
//     o2.setNumber(5, 7);
//     Calculator calc;
//     int res = calc.sumRealComplex(o1, o2);
//     cout << "The sum of real part of o1 and o2 is " << res << endl;
//     int resc = calc.sumCompComplex(o1, o2);
//     cout << "The sum of complex part of o1 and o2 is " << resc << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

// foward declaration
class Complex;

class Calculator
{

    int a, b;

public:
    int sum(Complex, Complex);
    int Multiply(Complex, Complex);
};

class Complex
{
    int a, b;

    // Individually declaring functions as friends
    // friend void Calculator ::sum(Complex, Complex);
    // friend void Calculator ::Multiply(Complex, Complex);

    friend class Calculator;

public:
    void getData(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    void displayData()
    {
        cout << "the value of a is - " << a << endl;
        cout << "the value of b is - " << b << endl;
    }
};

// not in scope
void Calculator ::sum(Complex c1, Complex c2)
{
    // friend function always take objects as arguments
    Complex c3;
    c3.getData((c1.a + c1.b), (c2.a + c2.b));
}

void Calculator ::Multiply(Complex c1, Complex c2)
{
    // friend function always take objects as arguments
    Complex c3;
    c3.getData((c1.a * c1.b), (c2.a * c2.b));
}

int main()
{
    Complex c1, c2, c3;
    int a, b;
    cout << "\n Enter the  value of a -   ";
    cin >> a;
    cout << "\n Enter the value of b -  ";
    cin >> b;
    c1.getData(a, b);
    c2.getData(a, b);

    Calculator calc;

    calc.sum(c1, c2);
    calc.Multiply(c1, c2);
}
