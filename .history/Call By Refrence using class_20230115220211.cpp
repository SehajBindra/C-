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

    cout << " x is - ";
    cin >> x;

    cout << "Y is - ";
    cin >> y;

    s.swapReference(x, y);
    cout << " \n swapped value of x \n"
         << x;
    cout << " \n swapped value of y \n"
         << y;

    return 0;
}