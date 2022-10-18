#include <iostream>
#include <conio.h>

using namespace std;

/*
    Constructor execution in inheritance

    case1:

        class B: public A{
            order of execution of constructor ---> A() -> B()
        }

    case2:

        class B: public A, public C{
            order of execution of constructor ---> A() -> C() -> B()
        }

    case3:

        class B: public C, public A{
            order of execution of constructor ---> C() -> A() -> B()
        }

    case4:

        class B: public C, virtual public A{
            order of execution of constructor ---> A() -> C() -> B()
        }


    case5:

        class B: virtual public C, public A{
            order of execution of constructor ---> C() -> A() -> B()
        }

    case6:

        class B: virtual public C, virtual public A{
            order of execution of constructor ---> C() -> A() -> B()
        }
*/

class Base1
{
    int data1;

public:
    Base1(int i)
    {
        data1 = i;
        cout << "Base1 class constructor called" << endl;
    }
    void printData1(void)
    {
        cout << "the value of Data1 is " << data1 << endl;
    }
};

class Base2
{
    int data2;

public:
    Base2(int i)
    {
        data2 = i;
        cout << "Base2 class constructor called" << endl;
    }
    void printData2(void)
    {
        cout << "the value of Data2 is " << data2 << endl;
    }
};

class Derived1 : public Base1
{
    int data3;

public:
    Derived1(int a, int c) : Base1(a)
    {
        data3 = c;
        cout << "Derived1 class constructor called!" << endl;
    }
    void printData3(void)
    {
        cout << "the value of Data3 is " << data3 << endl;
    }
};

class Derived2 : public Base1, public Base2
{
    int data3;

public:
    Derived2(int a, int b, int c) : Base2(a), Base1(b)
    {
        data3 = c;
        cout << "Derived2 class constructor called!" << endl;
    }
    void printData3(void)
    {
        cout << "the value of Data3 is " << data3 << endl;
    }
};

class Derived3 : public Base2, public Base1
{
    int data3;

public:
    Derived3(int a, int b, int c) : Base2(a), Base1(b)
    {
        data3 = c;
        cout << "Derived3 class constructor called!" << endl;
    }
    void printData3(void)
    {
        cout << "the value of Data3 is " << data3 << endl;
    }
};

class Derived4 : public Base2, virtual public Base1
{
    int data3;

public:
    Derived4(int a, int b, int c) : Base2(a), Base1(b)
    {
        data3 = c;
        cout << "Derived4 class constructor called!" << endl;
    }
    void printData3(void)
    {
        cout << "the value of Data3 is " << data3 << endl;
    }
};

class Derived5 : virtual public Base2, public Base1
{
    int data3;

public:
    Derived5(int a, int b, int c) : Base2(a), Base1(b)
    {
        data3 = c;
        cout << "Derived5 class constructor called!" << endl;
    }
    void printData3(void)
    {
        cout << "the value of Data3 is " << data3 << endl;
    }
};

class Derived6 : virtual public Base2, virtual public Base1
{
    int data3;

public:
    Derived6(int a, int b, int c) : Base2(a), Base1(b) // initialization-section
    {
        data3 = c;
        cout << "Derived6 class constructor called!" << endl;
    }
    void printData3(void)
    {
        cout << "the value of Data3 is " << data3 << endl;
    }
};

int main()
{
    Derived1 obj1(3, 4);
    cout << endl;
    Derived2 obj2(2, 3, 4);
    cout << endl;
    Derived3 obj3(2, 3, 4);
    cout << endl;
    Derived4 obj4(2, 3, 4);
    cout << endl;
    Derived5 obj5(2, 3, 4);
    cout << endl;
    Derived6 obj6(2, 3, 4);

    return 0;
}
