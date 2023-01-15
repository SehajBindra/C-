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
    BankDeposit(){};

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
    cout << "  Years was : " << years << endl;
    cout << "Interest Rate was : " << returnvalue << endl;
}

int main()
{
    BankDeposit B1, B2, B3;
    int p, y, R;
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