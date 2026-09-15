#include <iostream>
using namespace std;

// class
class Swap // class name should be capital allways
{
public:
    int a;
    int b;
    int c;

    void set(int a, int b)
    {
        this->a = a;
        this->b = b;
    }

    void get()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }

    void swaping()
    {
        this->a = this->a + this->b;
        this->b = this->a - this->b;
        this->a = this->a - this->b;
    }

    void swaping2()
    {
        this->c = this->a;
        this->a = this->b;
        this->b = this->c;
    }
};

int main()
{
    Swap s1;

    s1.set(89, 90);
    s1.get();
    s1.swaping();
    s1.get();
    s1.swaping2();
    s1.get();
    return 0;
}