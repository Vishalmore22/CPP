#include <iostream>
using namespace std;

int main()
{
    int rows = 5;

    // Pattern 1
    cout << "Star Triangle" << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    // Pattern 2
    cout << "Inverted Star Triangle" << endl;
    for (int i = rows; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << "* ";
        }
        cout << "\n";
    }

    // Pattern 3
    cout << " Number Triangle" << endl;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << j << " ";
        }
        cout << "\n";
    }

    // Pattern 4
    cout << " Floyd's Triangle " << endl;
    int num = 1;
    for (int i = 1; i <= rows; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout << num << " ";
            num++;
        }
        cout << "\n";
    }

    // Pattern 5
    cout << " Full Pyramid" << endl;
    for (int i = 1; i <= rows; i++)
    {

        for (int space = 1; space <= rows - i; space++)
        {
            cout << " ";
        }

        for (int j = 1; j <= (2 * i - 1); j++)
        {
            cout << "*";
        }
        cout << "\n";
    }

    return 0;
}