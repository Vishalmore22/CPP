#include <iostream>
using namespace std;

int main()
{
    // check eligible for vote.

    int age;

    cout << "Enter Age" << endl;
    cin >> age;

    if (age > 100)
    {
        cout << "enter valid details";
    }
    else if (age >= 18)
    {
        cout << "eligible for vote ";
    }
    else
    {
        cout << "not eligible for vote";
    }

    return 0;
}