// Define an abstract class `Animal` with virtual functions `sound()` and `move()`. Implement concrete/normal classes `Dog` and `Bird` that inherit from `Animal`. Demonstrate polymorphism by creating an array of `Animal` pointers pointing to objects of both `Dog` and `Bird`. Call the `sound()` and `move()` functions for each object.
#include <iostream>
using namespace std;

class Animal
{
public:
    virtual void sound() = 0;
    virtual void move() = 0;
};


class Dog : public Animal
{
public:
    void sound() 
    {
        cout << "Dog : woof woof" << endl;
    }

    void move() 
    {
        cout << "Dog runs" << endl;
    }
};

class Bird : public Animal
{
public:
    void sound() 
    {
        cout << "Bird : chirp chirp" << endl;
    }

    void move() 
    {
        cout << "Bird fly" << endl;
    }
};

int main()
{

    Dog d;
    Bird b;

    Animal *animals[2];

    animals[0] = &d;
    animals[1] = &b;

    for (int i = 0; i < 2; i++)
    {
        animals[i]->sound();
        animals[i]->move();
        cout << endl;
    }

    return 0;
}