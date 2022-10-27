#include <iostream>
#include <conio.h>

using namespace std;

class Shop
{
private:
    int itemId[100];
    int itemPrice[100];
    int counter;

public:
    Shop(/* args */);
    ~Shop();

    void setPrice();
    void displayPrice();
};

Shop::Shop(/* args */)
{
    counter = 0;
}

Shop::~Shop()
{
}

void Shop::setPrice()
{
    char c;
    cout << "Enter Item Id for no " << counter + 1 << endl;
    cin >> itemId[counter];

    cout << "Enter Item Price" << endl;
    cin >> itemPrice[counter];

    counter++;

    cout << "Do you want to insert new item ??" << endl;
    cin >> c;

    if (c == 'y')
    {
        setPrice();
    }
}
void Shop::displayPrice()
{
    cout << "Displaying total created items" << endl
         << endl;
    for (int i = 0; i < counter; i++)
    {
        cout << "Price for Item id " << itemId[i] << " is " << itemPrice[i] << endl;
    }
}

int main()
{
    Shop s1;
    s1.setPrice();
    s1.displayPrice();
    s1.~Shop();
    return 0;
}
