#include <iostream>

using namespace std;

class Student
{

    string name;
    int age;
    string subject;
    string course;

public:
    Student() {}

    Student(string n, int a, string sub, string c);

    void displayData();
};

// scope resolution
Student ::Student(string n, int a, string sub, string c)
{

    name = n;
    age = a;
    subject = sub;
    course = c;
}

void Student ::displayData()
{
    cout << "Student Name is " << name << endl;
    cout << " Student is " << age << " Years old " << endl;
    cout << "Student fav Subject is " << subject << endl;
    cout << "Student is pursuing " << course << endl;
}

int main()
{
    Student s1;

    string n, sub, c;
    int a;

    cout << "Your Name - ";
    cin >> n;

    cout << "Your Age - ";
    cin >> a;

    cout << "Your Fav Subject - ";
    cin >> sub;

    cout << "Your Course - ";
    cin >> c;

    // explicit call
    s1 = Student(n, a, sub, c);
    s1.displayData();

    return 0;
}
