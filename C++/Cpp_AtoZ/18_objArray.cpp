#include <iostream>
#include <conio.h>

using namespace std;

class objArray
{
    int id;
    int constNum;

public:
    void setId(void)
    {
        constNum = 100;
        cout << "Enter the id for constNumber: ";
        cin >> id;
    }

    void getId(void)
    {
        cout << "constNum is " << constNum << " id is " << id << endl;
    }
};

int main()
{
    objArray OA[5];

    for (int i = 0; i < 5; i++)
    {
        OA[i].setId();
        OA[i].getId();
    }

    return 0;
}
