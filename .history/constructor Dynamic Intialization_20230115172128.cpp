#include <iostream>
using namespace std;

class BankDeposit
{
    int principal;
    int years;
    float interestrate;
    float returnvalue;

public:
    // declaration of constructors
    // constructor 1
    BankDeposit() {}

    BankDeposit(int p, int y, float r);
    // r can be 0.08
    BankDeposit(int p, int y, int r);
    // r can be in 8%

    void show();
};

// scope resolution to access public

BankDeposit ::BankDeposit(int p, int y, float r)
{

    p = principal;
    y = years;
    interestrate = r;
    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
}

BankDeposit ::BankDeposit(int p, int y, int r)
{

    p = principal;
    y = years;
    interestrate = float(r) / 100;
    returnvalue = principal;

    for (int i = 0; i < y; i++)
    {
        returnvalue = returnvalue * (1 + interestrate);
    }
};

void BankDeposit ::show()
{
    cout << " Prinicpal Amount was : " << principal << endl;
    cout << " . Return value after  : " << years << endl;
    cout << " Years was : " << returnvalue << endl;
}

int main()
{
    BankDeposit B1, B2, B3;
    int p, y;
    float r;
    cout << "Please Enter the Prinicpal Amount : " << endl;
    ;
    cin >> p;
    cout << "Please Enter the  Years : " << endl;
    cin >> y;
    cout << "Please Enter the Interest Rate : " << endl;
    cin >> r;
    B1 = BankDeposit(p, y, r);
    B1.show();

    return 0;
};

// #include <iostream>
// using namespace std;

// class BankDeposit
// {
//     int principal;
//     int years;
//     float interestRate;
//     float returnValue;

// public:
//     BankDeposit() {}
//     BankDeposit(int p, int y, float r); // r can be a value like 0.04
//     BankDeposit(int p, int y, int r);   // r can be a value like 14
//     void show();
// };

// BankDeposit ::BankDeposit(int p, int y, float r)
// {
//     principal = p;
//     years = y;
//     interestRate = r;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }

// BankDeposit ::BankDeposit(int p, int y, int r)
// {
//     principal = p;
//     years = y;
//     interestRate = float(r) / 100;
//     returnValue = principal;
//     for (int i = 0; i < y; i++)
//     {
//         returnValue = returnValue * (1 + interestRate);
//     }
// }

// void BankDeposit ::show()
// {
//     cout << endl
//          << "Principal amount was " << principal
//          << ". Return value after " << years
//          << " years is " << returnValue << endl;
// }

// int main()
// {
//     BankDeposit bd1, bd2, bd3;
//     int p, y;
//     float r;
//     int R;

//     cout << "Enter the value of p y and r" << endl;
//     cin >> p >> y >> r;
//     bd1 = BankDeposit(p, y, r);
//     bd1.show();

//     cout << "Enter the value of p y and R" << endl;
//     cin >> p >> y >> R;
//     bd2 = BankDeposit(p, y, R);
//     bd2.show();
//     return 0;
// }
