// Define a class named Rectangle with private attributes length and width. Implement public member functions to set and get the values of these attributes. Include a method to calculate the area of the rectangle. Create an object of the Rectangle class and demonstrate the functionality of the implemented methods.

#include <iostream>
using namespace std;

class Rectangle
{
private:
    int length;
    int width;

public:
    void setLength(int l)
    {
        length = l;
    }

    void setWidth(int w)
    {
        width = w;
    }

    int getLength()
    {
        return length;
    }

    int getWidth()
    {
        return width;
    }

    int Area()
    {
        return length * width;
    }
};

int main()
{

    Rectangle r;

    r.setLength(10);
    r.setWidth(5);

    cout << "Length: " << r.getLength() << endl;
    cout << "Width: " << r.getWidth() << endl;

    cout << "Area of Rectangle: " << r.Area() << endl;

    return 0;
}
