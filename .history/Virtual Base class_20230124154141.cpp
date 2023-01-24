// #include <iostream>
// using namespace std;

// class Student
// {
// protected:
//     int roll_no;

// public:
//     void set_number(int a)
//     {
//         roll_no = a;
//     }
//     void print_number(void)
//     {
//         cout << "Your roll no is " << roll_no << endl;
//     }
// };

// class Test : virtual public Student
// {
// protected:
//     float maths, physics;

// public:
//     void set_marks(float m1, float m2)
//     {
//         maths = m1;
//         physics = m2;
//     }

//     void print_marks(void)
//     {
//         cout << "You result is here: " << endl
//              << "Maths: " << maths << endl
//              << "Physics: " << physics << endl;
//     }
// };

// class Sports : virtual public Student
// {
// protected:
//     float score;

// public:
//     void set_score(float sc)
//     {
//         score = sc;
//     }

//     void print_score(void)
//     {
//         cout << "Your PT score is " << score << endl;
//     }
// };

// class Result : public Test, public Sports
// {
// private:
//     float total;

// public:
//     void display(void)
//     {
//         total = maths + physics + score;
//         print_number();
//         print_marks();
//         print_score();
//         cout << "Your total score is: " << total << endl;
//     }
// };

// int main()
// {
//     int roll_no, score;
//     float maths, physics;
//     string studentName;
//     cout << "Enter the student roll no : ";
//     cin >> roll_no;
//     cout << "Please Enter Student Maths Marks  : ";
//     cin >> maths;
//     cout << "Please Enter Student physics Marks  : ";
//     cin >> physics;
//     cout << "Please Enter student Pt score  : ";
//     cin >> score;
//     Result harry;
//     harry.set_number(roll_no);
//     harry.set_marks(maths, physics);
//     harry.set_score(score);
//     harry.display();
//     return 0;
// }

#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void getRollno(int r)
    {
        roll_no = r;
    }

    void printRollno()
    {
        cout << "Your Roll no is :" << roll_no;
    }
};

class Test : virtual public Student
{
protected:
    int cplus, ComputerStructureArchitecture,
        ComputerNetwork, ManagementStudies, humanValue;

public:
    void setMarks(int c, int csa, int cn, int m, int h)
    {
        cplus = c;
        ComputerStructureArchitecture = csa;
        ManagementStudies = m;
        ComputerNetwork = cn;
        humanValue = h;
    }

    void printMarks()
    {
        cout << "Your Marks in C++  is :" << cplus;
        cout << "Your Marks in  CSA is :" << ComputerStructureArchitecture;
        cout << "Your Marks in CN is :" << ComputerNetwork;
        cout << "Your Marks in MPOP is :" << ManagementStudies;
        cout << "Your Marks in MPOP is :" << humanValue;
    }
};

class Additional : virtual public Student
{
protected:
    int python;

public:
    void additional(int p)
    {
        python = p;
    }

    void printAdditional()
    {
        cout << "Your Marks in Python is :" << python;
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

        if (total >= 600)
        {
            cout << "Your total marks are : " << total;
            cout << " you have cracked the externals Congratulations ~~";
        }

        else
        {
            cout << "Your total marks are : " << total;
            cout << "you have to work hard !! ";
        }
    }
};

int main()
{
    int cplus, ComputerStructureArchitecture, roll_no, python,
        ComputerNetwork, ManagementStudies, humanValue;

    cout << " Please Enter Your Enrollment No :";
    cin >> roll_no;
    cout << " Please Enter Your Marks in C++  is :";
    cin >> cplus;
    cout << " Please Enter Your Marks in  CSA is :";
    cin >> ComputerStructureArchitecture;
    cout << " Please Enter Your Marks in CN is :";
    cin >> ComputerNetwork;
    cout << " Please Enter Your Marks in MPOP is :";
    cin >> ManagementStudies;
    cout << " Please Enter Your Marks in Python is :";
    cin >> python;
    cout << " Please Enter Your Marks in MPOP is :";
    cin >> humanValue;

    Result student;
    student.getRollno(roll_no);
    student.setMarks(cplus, ComputerStructureArchitecture, ComputerNetwork, ManagementStudies, humanValue);
    student.additional(python);
    student.display();

    return 0;
}