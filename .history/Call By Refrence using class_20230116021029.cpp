// call by reference using class

#include <iostream>
using namespace std;
class Swap
{
public:
        void swapReference(int &a, int &b)
    {
        int temp = a;
        a = b;
        b = temp;
    }
};
int main()
{

    Swap s;
    int x, y;

    cout << " Please enter the value of x  - ";
    cin >> x;

    cout << "\n Please enter the value of y  - ";
    cin >> y;

    s.swapReference(x, y);
    cout << " \n swapped value of x is "
         << x;
    cout << "\n swapped value of y is "
         << y;

    return 0;
}