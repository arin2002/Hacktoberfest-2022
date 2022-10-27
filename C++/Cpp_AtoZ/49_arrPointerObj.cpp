#include <iostream>
#include <conio.h>

using namespace std;

class Shop
{
    int id;
    float price;

public:
    void setData(int a, int b)
    {
        id = a; // implicit this pointer invoked
        price = b;
    }

    void getData(void)
    {
        cout << "Code of this item is " << id << endl;
        cout << "Price of the object is " << price << endl
             << endl;
    }
};

int main()
{
    int size = 3, p, q;
    Shop *ptr = new Shop[size]; // *ptr ha store shop cha address
    Shop *ptrTemp = ptr;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter id and price of item " << i + 1 << endl;
        cin >> p >> q;
        ptr->setData(p, q);
        ptr++;
    }

    for (int i = 0; i < size; i++)
    {
        cout << "Item number: " << i + 1 << endl;
        ptrTemp->getData();
        ptrTemp++;
    }

    return 0;
}