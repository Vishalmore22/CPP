// Q.1 Write a Program to create a class to read and add two distances.
// For example,
// Input:
// input1 => feet: 8, inch: 16
// input2 => feet: 4, inch: 14

// Output:
// 14 feet 6 inch

#include <iostream>
using namespace std;

// class
class Distance
{
public:
    int feet;
    int inch;
    int feet_2;
    int inch_2;
    int totalfeet;
    int totalinch;
    int sum;
    int lastNumber;

    void input()
    {
        cout << "Enter feet - ";
        cin >> feet;
        cout << "Enter inch - ";
        cin >> inch;
        cout << "Enter feet - ";
        cin >> feet_2;
        cout << "Enter inch - ";
        cin >> inch_2;
    }

    void output()
    {
        cout << "feet " << totalfeet << " inch " << totalinch;
    }

    void add()
    {
        // Add feet
        totalfeet = feet + feet_2;//12

        // Add inches
        totalinch = inch + inch_2;//30

        // Convert inches into feet
        if (totalinch >= 12)
        {
            totalfeet = totalfeet + (totalinch / 12);//14
            totalinch = totalinch % 12;//6  
        }
    }
};

int main()
{
    Distance a;
    a.input();
    a.add();
    a.output();
    return 0;
}
