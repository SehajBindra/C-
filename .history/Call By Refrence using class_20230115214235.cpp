#include <iostream>
using namespace std;
class Swap
{
public:
    int a, b, swap;
    void getdata()
    {
        cout << "enter the value of a \n";
        cin >> a;
        cout << " \nenter the value of b \n";
        cin >> b;
    }

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
    s.getdata();
    s.swapRefrence(x, y);
    s.display();
    return 0;
}