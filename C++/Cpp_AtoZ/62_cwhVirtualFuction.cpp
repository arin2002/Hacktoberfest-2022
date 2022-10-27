#include <iostream>
#include <conio.h>
#include <string.h>

using namespace std;

class CWH
{
protected:
    char title[30];
    float rating;

public:
    CWH(char *s, float r)
    {
        strcpy(title, s);
        rating = r;
    }
    virtual void display() {}
};

class CWHvideos : public CWH
{
};

class CHWtext : public CWH
{
};

int main()
{

    return 0;
}