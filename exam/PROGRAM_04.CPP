// Extend the `Shape` hierarchy from Question 3 to include a virtual function `display()`. Implement the `display()` function in each derived class to print information specific to the shape. Create an array of `Shape` pointers, pointing to objects of different shapes. Demonstrate polymorphism by calling the `display()` function for each object.

#include <iostream>
using namespace std;

class Shape
{
private:
    string color;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }

    virtual void display()
    {
        cout << "This is a shape" << endl;
    }
};

class Circle : public Shape
{
private:
    int radius;

public:
    Circle(int r)
    {
        radius = r;
    }

    void display() 
    {
        cout << "Circle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Radius: " << radius << endl;
        cout << "Area: " << 3.14 * radius * radius << endl;
        cout << endl;
    }
};

class Rectangle : public Shape
{
private:
    int length;
    int width;

public:
    Rectangle(int l, int w)
    {
        length = l;
        width = w;
    }

    void display() 
    {
        cout << "Rectangle" << endl;
        cout << "Color: " << getColor() << endl;
        cout << "Length: " << length << endl;
        cout << "Width: " << width << endl;
        cout << "Area: " << length * width << endl;
        cout << endl;
    }
};

int main()
{

    Circle c(5);
    Rectangle r(10, 5);


    c.setColor("Red");
    r.setColor("Blue");

    Shape *shapes[2];

    shapes[0] = &c;
    shapes[1] = &r;

    for (int i = 0; i < 2; i++)
    {
        shapes[i]->display();
    }
    
    return 0;
}