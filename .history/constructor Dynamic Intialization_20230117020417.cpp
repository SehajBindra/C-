// #include <iostream>
// using namespace std;

// // dynamic intialization of objects .......... taking inut from user

// class BankDeposit
// {
//     int principal;
//     int years;
//     float interestrate;
//     float returnvalue;

// public:
//     // declaration of constructors
//     // constructor 1
//     // constructor overloading

//     BankDeposit(){}

//     BankDeposit(int p, int y, float r);
//     // r can be 0.08
//     BankDeposit(int p, int y, int r);
//     // r can be in 8%

//     void show();
// };

// // scope resolution to access public

// BankDeposit ::BankDeposit(int p, int y, float r)
// {

//     principal = p;
//     years = y;
//     interestrate = r;
//     returnvalue = principal;

//     for (int i = 0; i < y; i++)
//     {

//         returnvalue = returnvalue * ( interestrate);
//     }
// }

// BankDeposit ::BankDeposit(int p, int y, int r)
// {

//     principal = p;
//     years = y;
//     interestrate = float(r) / 100;
//     returnvalue = principal;

//     for (int i = 0; i < y; i++)
//     {
//         returnvalue = returnvalue * (1 + interestrate);
//     }
// };

// void BankDeposit ::show()
// {
//     cout << " Prinicpal Amount was : " << principal << endl;
//     cout << " . Return value after  : " << years << endl;
//     cout << " Years was : " << returnvalue << endl;
// }

// int main()
// {
//     BankDeposit B1, B2, B3;
//     int p, y, R;
//     float r;
//     cout << "Please Enter the Prinicpal Amount : " << endl;
//     ;
//     cin >> p;
//     cout << "Please Enter the  Years : " << endl;
//     cin >> y;
//     cout << "Please Enter the Interest Rate : " << endl;
//     cin >> r;
//     B1 = BankDeposit(p, y, r);
//     B1.show();

//     cout << "Please Enter the Prinicpal Amount : " << endl;
//     ;
//     cin >> p;
//     cout << "Please Enter the  Years : " << endl;
//     cin >> y;
//     cout << "Please Enter the Interest Rate : " << endl;
//     cin >> R;
//     B2 = BankDeposit(p, y, R);
//     B2.show();

//     return 0;
// };

// #include <iostream>

// using namespace std;

// class Student
// {

//     string name;
//     int age;
//     string subject;
//     string course;

// public:
//     Student() {}

//     Student(string n, int a, string sub, string c);

//     void displayData();
// };

// // scope resolution
// Student ::Student(string n, int a, string sub, string c)
// {

//     name = n;
//     age = a;
//     subject = sub;
//     course = c;
// }

// void Student ::displayData()
// {
//     cout << "Student Name is " << name << endl;
//     cout << " Student is " << age << " Years old " << endl;
//     cout << "Student fav Subject is " << subject << endl;
//     cout << "Student is pursuing " << course << endl;
// }

// int main()
// {
//     Student s1;

//     string n, sub, c;
//     int a;

//     cout << "Your Name - ";
//     cin >> n;

//     cout << "Your Age - ";
//     cin >> a;

//     cout << "Your Fav Subject - ";
//     cin >> sub;

//     cout << "Your Course - ";
//     cin >> c;

//     // explicit call
//     s1 = Student(n, a, sub, c);
//     s1.displayData();

//     return 0;
// }

// Q. make class using constructor while taking user from input

#include <iostream>
using namespace std;

class Student
{
    int id;
    string name, subject, course;

public:
    Student() {}
    Student(string n, string s, string c, int i)
    {
        name = n;
        subject = s;
        course = c;
        id = i;
    }

    void display()
    {
        cout << "name of the student is " << name;
        cout << "course of the student is " << course;
        cout << "sub of the student is " << subject;
        cout << "id of the student is " << id;
    }

    // void getvalues()
    // {
    //     cin >> name;
    //     cin >> course;
    //     cin >> subject;
    //     cin >> id;
    // }
};

int main()
{

    string n, s, c;
    int i;

    cout << "Your Name - ";
    cin >> n;

    cout << "Your  subject - ";
    cin >> s;

    cout << "Your  course - ";
    cin >> c;

    cout << "Your id - ";
    cin >> i;
    // implicit call
    Student s1(n, s, c, i);
    s1.display();

    // s.(jappanjot,maths,bca,12)
    return 0;
}
