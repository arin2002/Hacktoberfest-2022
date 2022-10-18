/*
    Virtual Base Class

    class Student is main base class
    class Test and Sports inherits data from student base class
    class Result is derived from test & sports

    Student
    Student --> Test
    Student --> sports
    test & Sports -- > result
*/
#include <iostream>
#include <conio.h>

using namespace std;

class Student
{
protected:
    int rollNo;

public:
    Student()
    {
        rollNo = 1;
    }
    void set_Number(int a)
    {
        rollNo = a;
    }
    void print_number(void)
    {
        cout << endl
             << "Your Roll No is " << rollNo << endl;
    }
};

class Test : virtual public Student
{
protected:
    float maths, physics;

public:
    Test()
    {
        maths = 0;
        physics = 0;
    }
    void set_marks(float m1, float m2)
    {
        maths = m1;
        physics = m2;
    }
    void print_marks(void)
    {
        cout << "Your Result is here: " << endl
             << "   Maths : " << maths << endl
             << "   Physics : " << physics << endl;
    }
};

class Sports : virtual public Student
{
protected:
    float score;

public:
    Sports()
    {
        score = 0;
    }
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
    Result()
    {
        total = 0;
    }
    void display(void)
    {
        total = maths + physics + score;
        print_number();
        print_marks();
        print_score();
        cout << "Your total score is " << total << endl;
    }
};

int main()
{
    Result kunal;
    kunal.set_Number(101);
    kunal.set_marks(60, 90);
    kunal.set_score(9);
    kunal.display();

    Result Harry;
    Harry.set_Number(102);
    Harry.set_marks(34, 33);
    Harry.set_score(6);
    Harry.display();
    return 0;
}
