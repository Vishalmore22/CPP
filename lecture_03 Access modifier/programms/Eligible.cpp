#include <iostream>
using namespace std;

class Eligible
{
public:
    int age;

    void input(int age)
    {
        this->age = age;
    }

    void output()
    {
        cout << "age = " << age << endl;
    };

    void eligible()
    {
        if (age >= 18)
        {
            cout << "you are eligible";
        }
        else
        {
            cout << "you are not eligible";
        }
    }
};

int main()
{
    Eligible A1;

    A1.input(18);
    A1.output();
    A1.eligible();
    A1.output();
    return 0;
}