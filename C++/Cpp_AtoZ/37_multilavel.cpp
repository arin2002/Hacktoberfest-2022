#include <iostream>
#include <conio.h>

using namespace std;
/*
    Notes:
        if we are inheriting A and c from B: [A---->B---->C]
        1. A is th base class for B and B is base class for C
        2. A---->B---->C is called Inheritance Path
*/
class Student
{
protected:
    int roll_number;

public:
    void set_roll_number(int);
    void get_roll_number(void);
};

void Student::set_roll_number(int r)
{
    roll_number = r;
}

void Student::get_roll_number()
{
    cout << "roll number is " << roll_number << endl;
}

class Exam : public Student
{
protected:
    float maths, physics;

public:
    void set_marks(float m, float p);
    void get_marks(void);
};

void Exam::set_marks(float m, float p)
{
    maths = m;
    physics = p;
    // if ((maths <= 101.0 && maths >= 0.0) && (physics <= 101.0 && physics >= 0.0))
    // {
    //     cout << "Marks should be less than 100 and greater than 0 " << endl;
    //     exit(0);
    // }
    // else
    // {
    //     cout << "fuck you";
    // }
}
void Exam::get_marks()
{
    cout << "The marks in maths are " << maths << " and physics marks is " << physics << endl;
}
class Result : public Exam
{
protected:
    float percentage;

public:
    void result()
    {
        get_roll_number();
        get_marks();
        percentage = (maths + physics) / 2;
        cout << "Your percentage is " << percentage;
    }
};

int main()
{
    Result harry;
    harry.set_roll_number(100);
    harry.set_marks(90, 90);
    cout << ".......................Result........................." << endl;
    harry.result();
    return 0;
}