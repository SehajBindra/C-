#include <iostream>
using namespace std;

class Swap
{

public:
    int a, b, swap;

    void getData()
    {
        cout << "enter the value of a \n";
        cin >> a;
        cout << " \nenter the value of b \n";
        cin >> b;
    }

    void SwapByValue()
    {
        swap = a;
        a = b;
        b = swap;
    }

    void DisplayData()
    {
        cout << "swaped value of a is "
             << a;
        cout << " swaped value of b is "
             << b;
    }
};

int main()
{
    Swap s;
    s.getData();
    s.SwapByValue();
    s.DisplayData();
}