#include <iostream>
using namespace std;

class Student
{
protected:
    int roll_no;

public:
    void set_number(int a)
    {
        roll_no = a;
    }
    void print_number(void)
    {
        cout << "Your roll no is " << roll_no << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }

    void print_marks(void)
    {
        cout << "You result is here: " << endl
             << "Maths: " << maths << endl
             << "Physics: " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    void set_score(float sc)
    {
        score = sc;
    }

    void print_score(void)
    {
        cout << "Your PT score is " << score << endl;
    }
};

class Result : public Test, public Sports
{
private:
    float total;

public:
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is: " << total << endl;
    }
};

int main()
{
    int roll_no, score;
    float maths, physics;
    string studentName;
    cout << "Enter the student roll no : ";
    cin >> roll_no;
    cout << "Please Enter Student Maths Marks  : ";
    cin >> maths;
    cout << "Please Enter Student physics Marks  : ";
    cin >> physics;
    cout << "Please Enter student score  : ";
    cin >> score;
    Result harry;
    harry.set_number(roll_no);
    harry.set_marks(maths, physics);
    harry.set_score(score);
    harry.display();
    return 0;
}