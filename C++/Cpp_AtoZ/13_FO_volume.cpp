#include <iostream>
#include <conio.h>

using namespace std;

// volume of sphere
float volume(float pi, float r)
{
    return 4 * (pi * r * r * r) / 3;
}

// volume of cube
float volume(float r)
{
    return r * r * r;
}

// volume of cylinder
float volume(float pi, float r, float h)
{
    return pi * r * r * h;
}
int main()
{
    float r, pi, h;
    r = 5;
    pi = 3.14;
    h = 9;

    cout << "Volume of cube is " << volume(r) << endl;
    cout << "Volume of sphere is " << volume(pi, r) << endl;
    cout << "volume of cylinder is " << volume(pi, r, h) << endl;

    return 0;
}
