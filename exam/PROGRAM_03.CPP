// Define a base class `Shape` with private attributes `color` and `area`. Implement public member functions for setting and getting the color and calculating the area. Derive two classes, `Circle` and `Rectangle`, from the `Shape` class. Implement methods to calculate the area specific to each shape. Demonstrate abstraction by calling the area calculation methods for both `Circle` and `Rectangle`.
#include <iostream>
using namespace std;

class Shape
{
private:
    string color;
    int area;

public:
    void setColor(string c)
    {
        color = c;
    }

    string getColor()
    {
        return color;
    }

    void setArea(int a)
    {
        area = a;
    }

    int getArea()
    {
        return area;
    }
};

class Circle : public Shape
{
public:
    void calculateCircleArea(int radius)
    {
        int area = 3.14 * radius * radius;
        setArea(area);

        cout << "Circle Area: " << getArea() << endl;
    }
};

class Rectangle : public Shape
{
public:
    void calculateRectangleArea(int length, int width)
    {
        int area = length * width;
        setArea(area);

        cout << "Rectangle Area: " << getArea() << endl;
    }
};

int main()
{
    Circle c;
    Rectangle r;

    c.setColor("Red");
    r.setColor("Blue");

    cout << "Circle Color: " << c.getColor() << endl;
    cout << "Rectangle Color: " << r.getColor() << endl;

    c.calculateCircleArea(5);
    r.calculateRectangleArea(10, 5);

    return 0;
}