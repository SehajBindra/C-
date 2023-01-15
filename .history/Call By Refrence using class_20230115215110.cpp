#include <iostream>
using namespace std;
class Swap
{
public:
    int a, b, swap;

    void swapRefrence(int &a, int &b)
    {
        int swap;
        swap = a;
        a = b;
        b = swap;
    }

    void display(void)
    {
        cout << " \n swapped value of a \n"
             << a;
        cout << " \n swapped value of b \n"
             << b;
    }
};
int main()
{

    Swap s;
    int x, y;
    cout << "Value of x - ";
    cin >> x;

    cout << "Value of y - ";
    cin >> y;
    s.swapRefrence(x, y);
    return 0;
}