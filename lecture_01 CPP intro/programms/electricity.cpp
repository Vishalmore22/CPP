#include <iostream>
using namespace std;

int main()
{
    float units, bill = 0.0;
    cout << "Enter units : ";
    cin >> units;

    if (units <= 100)
    {
        bill = units * 1.50;
    }
    else if (units <= 200)
    {
        bill = (100 * 1.50) + ((units - 100) * 2.50);
    }
    else if (units <= 300)
    {
        bill = (100 * 1.50) + (100 * 2.50) + ((units - 200) * 4.00);
    }
    else
    {
        bill = (100 * 1.50) + (100 * 2.50) + (100 * 4.00) + ((units - 300) * 5.00);
    }

    cout << "Total Electricity Bill = " << bill << endl;

    return 0;
}