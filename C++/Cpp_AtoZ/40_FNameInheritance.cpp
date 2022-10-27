/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;

class FirstName
{
protected:
    string firstName;

public:
    void setFirstName(const char *v1)
    {
        firstName = v1;
    }
};

class MidName
{
protected:
    string midName;

public:
    void setMidName(const char *v2)
    {
        midName = v2;
    }
};

class LastName
{
protected:
    string lastName;

public:
    void setLastName(const char *v3)
    {
        lastName = v3;
    }
};

class FullName : public FirstName, public MidName, public LastName
{
public:
    void display()
    {
        cout << "Your Full name is " << firstName << " " << midName << " " << lastName << endl;
    }
};

int main()
{
    FullName name;
    name.setFirstName("Kunal");
    name.setMidName("Santosh");
    name.setLastName("Dhongade");
    name.display();

    return 0;
}

/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************

// #include <iostream>
// #include <conio.h>
// #include <string>
// using namespace std;

// class FirstName
// {
// protected:
//     string firstName;

// public:
//     void setFirstName(string v1)
//     {
//         firstName = v1;
//     }
// };

// class MidName
// {
// protected:
//     string midName;

// public:
//     void setMidName(string v2)
//     {
//         midName = v2;
//     }
// };

// class LastName
// {
// protected:
//     string lastName;

// public:
//     void setLastName(string v3)
//     {
//         lastName = v3;
//     }
// };

// class FullName : public FirstName, public MidName, public LastName
// {
// public:
//     void display()
//     {
//         cout << "Your Full name is " << firstName << " " << midName << " " << lastName << endl;
//     }
// };

// int main()
// {
//     FullName name;
//     name.setFirstName("Kunal");
//     name.setMidName("Santosh");
//     name.setLastName("Dhongade");
//     name.display();

//     return 0;
// }

/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************

// #include <iostream>
// #include <conio.h>
// #include <string>
// using namespace std;

// class FirstName
// {
// protected:
//     string firstName;

// public:
//     void setFirstName(const std::string &v1)
//     {
//         firstName = v1;
//     }
// };

// class MidName
// {
// protected:
//     string midName;

// public:
//     void setMidName(const std::string &v2)
//     {
//         midName = v2;
//     }
// };

// class LastName
// {
// protected:
//     string lastName;

// public:
//     void setLastName(const std::string &v3)
//     {
//         lastName = v3;
//     }
// };

// class FullName : public FirstName, public MidName, public LastName
// {
// public:
//     void display()
//     {
//         cout << "Your Full name is " << firstName << " " << midName << " " << lastName << endl;
//     }
// };

// int main()
// {
//     FullName name;
//     name.setFirstName("Kunal");
//     name.setMidName("Santosh");
//     name.setLastName("Dhongade");
//     name.display();

//     return 0;
// }
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
/////*******************************************************************************************************************************************
// #include <iostream>
// #include <conio.h>
// #include <string>
// using namespace std;

// class FirstName
// {
// protected:
//     string firstName;

// public:
//     void setFirstName()
//     {
//         cout << "Enter first Name ";
//         cin >> firstName;
//     }
// };
// class MidName
// {
// protected:
//     string midName;

// public:
//     void setMidName()
//     {
//         cout << "Enter middle Name ";
//         cin >> midName;
//     }
// };
// class LastName
// {
// protected:
//     string lastName;

// public:
//     void setLastName()
//     {
//         cout << "Enter last Name ";
//         cin >> lastName;
//     }
// };
// class FullName : public FirstName, public MidName, public LastName
// {
// public:
//     void display()
//     {
//         cout << "Your Full name is " << firstName << " " << midName << " " << lastName << endl;
//     }
// };
// int main()
// {
//     FullName name;
//     name.setFirstName();
//     name.setMidName();
//     name.setLastName();
//     name.display();
//     return 0;
// }
