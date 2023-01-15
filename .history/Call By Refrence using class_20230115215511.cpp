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
    void getdata(void)
    {
        cout << "enter the value of a \n";
        cin >> a;
        cout << " \nenter the value of b \n";
        cin >> b;
    }
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
    s.getdata();
    s.swapReference(x, y);
    s.display();
    return 0;
}