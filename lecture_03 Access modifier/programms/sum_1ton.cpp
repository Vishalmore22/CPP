#include <iostream>
using namespace std;

class Sum1ton
{
public:
    int number;
    void input()
    {
        cin >> number;
        this->number = number;
    };

    void output()
    {
        cout << "" << number << endl;
    };

    void sum1ton()
    {
        int sum = 0;
        // int i = 1;
        // while (i <= number)
        // {
        //     cout << "" << i << endl;
        //     sum = sum + i;
        //     i++;
        // };

        // do
        // {
        //     cout << "" << i << endl;
        //     sum = sum + i;
        //     i++;
        // } while (i <= number);

        for (int i = 1; i <= number; i++)
        {
            cout << "" << i << endl;
            sum = sum + i;
        };

        cout << "sum = " << sum << endl;
    };
};

int main()
{
    Sum1ton a1;
    a1.input();
    a1.output();
    a1.sum1ton();
    return 0;
}