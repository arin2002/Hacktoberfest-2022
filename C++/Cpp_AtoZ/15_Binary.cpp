#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class binary
{
private:
    string s;
    void chk_binary(void);

public:
    void read(void);
    void display(void);
    void ones_complement(void);
};

void binary::read(void)
{
    cout << "Enter binary number ----> " << endl;
    cin >> s;
}
void binary::chk_binary(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '0' && s[i] != '1')
        {
            cout << "Invalid binary format !!!";
            exit(0);
        }
    }
}
void binary::display(void)
{
    chk_binary();
    cout << "Your binary is ----> ";
    cout << s << endl;
}
void binary::ones_complement(void)
{
    chk_binary();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s[i] = '1';
        }
        else
        {
            s[i] = '0';
        }
    }
    cout << endl
         << "After ones complement " << endl;
}
int main()
{
    binary a;
    a.read();
    a.display();
    a.ones_complement();
    a.display();
    getch();
    return 0;
}
