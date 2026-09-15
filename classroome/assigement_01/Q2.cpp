// Q.2 Write a Program to create a class to read time in seconds and convert it into time in (HH:MM: SS) format.
// For example,
// Input:
// Enter seconds: 4520

// Output:
// 1:15:20

#include <iostream>
using namespace std;

class Time
{
public:
    int seconds;
    int hours;
    int minutes;
    int sec;

    void input()
    {
        cout << "Enter seconds: ";
        cin >> seconds;
    }

    void convert()
    {
        // seconds into hours
        hours = seconds / 3600;

        // remaining seconds after hours
        seconds = seconds % 3600;

        // remaining seconds into minutes
        minutes = seconds / 60;

        // remaining seconds
        sec = seconds % 60;
    }

    void output()
    {
        cout << hours << ":" << minutes << ":" << sec;
    }
};

int main()
{
    Time t;

    t.input();
    t.convert();
    t.output();

    return 0;
}