#include <iostream>
using namespace std;

class Constructor
{
    int a, b;

public:
    // constructor declaration
    Constructor(int, float);

    void AddNo(void)
    {
        cout << "enter the first number :";
        cin >> a;

        cout << "enter the second number :";

        cin >> b;
    }
};

Constructor ::Constructor(int x, float y)
{
    a = x;
    b = y;
};

// Constructor ::Constructor(int x) {
//    a = x;
//    b = 0;
// };

int main()
{
    Constructor c1(4, 8);
    c1.AddNo();

    return 0;
};
