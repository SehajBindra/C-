#include <iostream>
using namespace std;

class Base
{
    int a, b;

public:
    void getData();
    void displayData();
    void sum();
    void Multiply();
};

void Base ::getData(int n1, int n2)
{
    a = n1;
    b = n2;
}