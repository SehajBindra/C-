#include <iostream>
using namespace std;

// 1 + 4i
// 5 + 8i
// -------
// 6 + 12i
class Complex
{
    int a, b;
    // Can be declared under the public or private access modifier,
    //  it will not make any difference
    friend Complex sumComplex(Complex o1, Complex o2);

public:
    void setNumber(int n1, int n2)
    {
        a = n1;
        b = n2;
    }

    // Below line means that non member - sumComplex funtion is allowed to do anything with my private  (members)
    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

// Not in the scope of the class
Complex sumComplex(Complex o1, Complex o2)
// Usually contain objects as arguments
{
    Complex o3;
    o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
    return o3;
}

int main()
{
    Complex c1, c2, sum;
    c1.setNumber(1, 4);
    c1.printNumber();

    c2.setNumber(5, 8);
    c2.printNumber();

    // c1.sumComplex() == Invalid
    sum = sumComplex(c1, c2);
    sum.printNumber();

    return 0;
}
