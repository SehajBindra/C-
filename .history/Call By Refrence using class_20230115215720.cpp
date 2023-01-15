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
    int a, b, temp;

    void swapReference(int &a, int &b)
    {
        temp = a;
        a = b;
        b = temp;
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

    cout << " x is - ";
    cin >> x;

    cout << "Y is - ";
    cin >> y;

    s.swapReference(x, y);
    s.display();
    return 0;
}