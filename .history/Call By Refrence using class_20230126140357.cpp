// call by reference using class

#include <iostream>
using namespace std;
class Swap
{

    // int a, b; private data members
    // priavte , protected
public:
    int a, b, temp;

    void getData()
    {
        cout << "enter the value of a \n";
        cin >> a;
        cout << " \nenter the value of b \n";
        cin >> b;
    }

    // declaration & intialization
    // this is  & ampercent
    void swapReference(int &a, int &b)
    {
        temp = a;
        a = b;
        b = temp;
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
    int a, b;
    Swap s;
    s.getData();

    s.swapReference(a, b);
    s.DisplayData();

    return 0;
}

// class classkanaam {

// };