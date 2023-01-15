// #include <iostream>
// using namespace std;
// class Swap
// {
// public:
//     int a, b, swap;

//     void swapRefrence(int &a, int &b)
//     {
//         int swap;
//         swap = a;
//         a = b;
//         b = swap;
//     }

//     void display(void)
//     {
//         cout << " \n swapped value of a \n"
//              << a;
//         cout << " \n swapped value of b \n"
//              << b;
//     }
// };
// int main()
// {

//     Swap s;
//     int x, y;
//     cout << "Value of x - ";
//     cin >> x;

//     cout << "Value of y - ";
//     cin >> y;
//     s.swapRefrence(x, y);
//     return 0;
// }

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