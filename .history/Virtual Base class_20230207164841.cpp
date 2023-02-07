// why we make virtual base class
// Virtual base classes in C++ are used to prevent multiple instances of a given class from appearing in an inheritance hierarchy when using multiple inheritances.

// for example
// #include <iostream>
// using namespace std;

// class A {
// public:
//     void show()
//     {
//         cout << "Hello form A \n";
//     }
// };

// class B : public A {
// };

// class C : public A {
// };

// class D : public B, public C {
// };

// int main()
// {
//     D object;
//     object.show();
// }

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void getRollno()
    {
        cout << " Please Enter Your Enrollment No :";
        cin >> roll_no;
    }

    void printRollno()
    {
        cout << "Your Roll no is :" << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    int cplus, ComputerStructureArchitecture,
        ComputerNetwork, ManagementStudies, humanValue;

public:
    void setMarks()
    {
        cout << " Please Enter Your Marks in C++   :";
        cin >> cplus;
        cout << " Please Enter Your Marks in  CSA :";
        cin >> ComputerStructureArchitecture;
        cout << " Please Enter Your Marks in CN  :";
        cin >> ComputerNetwork;
        cout << " Please Enter Your Marks in MPOP  :";
        cin >> ManagementStudies;

        cout << " Please Enter Your Human value and ethics in MPOP  :";
        cin >> humanValue;
    }

    void printMarks()
    {
        cout << "Your Marks in C++  is :" << cplus << endl;
        cout << "Your Marks in  CSA is :" << ComputerStructureArchitecture << endl;
        cout << "Your Marks in CN is :" << ComputerNetwork << endl;
        cout << "Your Marks in MPOP is :" << ManagementStudies << endl;
        cout << "Your Marks in MPOP is :" << humanValue << endl;
    }
};

class Additional : virtual public Student
{
protected:
    int python;

public:
    void additional()
    {
        cout << " Please Enter Your Marks in Python  :";
        cin >> python;

        // if (p <= 75)
        // {
        //     python = p;
        // }

        // else
        // {
        //     cout << "Invalid output ";
        // }
    }

    void printAdditional()
    {
        cout << "Your Marks in Python is :" << python << endl;
    }
};

class Result : public Test, public Additional
{
private:
    float total;

public:
    void display()
    {
        printRollno();
        printMarks();
        printAdditional();
        total = cplus + ComputerStructureArchitecture + ManagementStudies + ComputerNetwork + humanValue;

        if (total >= 120)
        {
            cout << "Your total marks are : " << total << endl;
            cout << "\n you have cracked the externals Congratulations ~~";
        }

        else
        {
            cout << "Your total marks are : " << total << endl;
            cout << "you have to work hard !! ";
        }
    }
};

int main()
{

    Result student;
    student.getRollno();
    student.setMarks();
    student.additional();
    student.display();

    return 0;
}