// #include <iostream>
// using namespace std;

// // 1 + 4i
// // 5 + 8i
// // -------
// // 6 + 12i
// class Complex
// {
//     int a, b;
//     // Can be declared under the public or private access modifier,
//     //  it will not make any difference
//     friend Complex sumComplex(Complex o1, Complex o2);

// public:
//     void setNumber(int n1, int n2)
//     {
//         a = n1;
//         b = n2;
//     }

//     // Below line means that non member - sumComplex funtion is allowed to do anything with my private  (members)
//     void printNumber()
//     {
//         cout << "Your number is " << a << " + " << b << "i" << endl;
//     }
// };

// // Not in the scope of the class
// Complex sumComplex(Complex o1, Complex o2)
// // Usually contain objects as arguments
// {
//     Complex o3;
//     o3.setNumber((o1.a + o2.a), (o1.b + o2.b));
//     return o3;
// }

// int main()
// {
//     Complex c1, c2, sum;
//     c1.setNumber(1, 4);
//     c1.printNumber();

//     c2.setNumber(5, 8);
//     c2.printNumber();

//     // c1.sumComplex() == Invalid
//     sum = sumComplex(c1, c2);
//     sum.printNumber();

//     return 0;
// }

#include <iostream>
using namespace std;

class Complex
{

    int a, b;
    // Can be declared under the public or private access modifier,
    //  it will not make any difference
    friend Complex Sum(Complex c1, Complex c2);

public:
    void getdata(int n1, int n2)
    {
        a = n1;
        b = n2;
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

    c3.getdata((c1.a + c2.b), (c1.a + c2.b));
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
    int a, b;
    cout << "\n Enter the  value of a -   ";
    cin >> a;
    cout << "\n Enter the value of b -  ";
    cin >> b;
    c1.getdata(a, b);

    c2.getdata(a, b);

    // c1.sumComplex() == Invalid
    sum = Sum(c1, c2);
    sum.printNo();

    return 0;
};
