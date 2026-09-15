#include <iostream>
using namespace std;

class Loop1ton
{
public:
    int number;

    void input()
    {
        cout << "Enter a number :";
        cin >> number;
        this->number = number;
    };

    void output()
    {
        cout << "The current number :" << number << endl;
    };

    void loop1ton()
    {
        // int i = 1;
        // while (number >= i)
        // {
        //     cout << "" << i << endl;
        //     i++;
        // }

        // do
        // {
        //     cout << "" << i << endl;
        //     i++;
        // } while (number >= i);

        for (int i = 1; i <= number; i++)
        {
            cout << "" << i << endl;
        };
    };

    void loopnto1()
    {
        // int i = 1;
        // while (number >= i)
        // {
        //     cout << "" << number << endl;
        //     number--;
        // }

        // do
        // {
        //     cout << "" << number << endl;
        //     number--;
        // } while (number >= i);

        for (int i = 1; i <= number; number--)
        {
            cout << "" << number << endl;
        };
    };
};

int main()
{
    Loop1ton a1;
    a1.input();
    a1.output();
    a1.loop1ton();
    a1.output();
    a1.loopnto1();
    a1.output();
    return 0;
}