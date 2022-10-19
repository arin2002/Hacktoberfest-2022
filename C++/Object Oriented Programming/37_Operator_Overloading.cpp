#include<iostream>
using namespace std;

class Test
{
    private:
    int num;
    public:
        Test(){
            num = 5;
        }
        Test operator ++()
        {
            Test temp;
            temp.num = num+1;
            cout<<"\nNo Argu\n";
            num++;
        }
        Test operator ++(int a)
        {
            cout<<"\nWith Argu\n";
            ++num;
        }
        void display()
        {
            cout<<num;
        }
};

int main()
{
    Test obj, result;
    result = ++obj;
    obj.display();

    result = obj++;
    obj.display();
    
    return 0;
}