// Q.2 Write a Program to create a Car Record System using the Class and object of any 4 Cars. Consider the below-mentioned attributes in the Car class:
// - car_id
// - car_company_name
// - car_color
// - car_model
// - car_release_year

#include <iostream>
using namespace std;

class Car
{
public:
    int car_id;
    string car_company_name;
    string car_color;
    string car_model;
    int car_release_year;

    void getData()
    {
        cout << "Enter Car ID: ";
        cin >> car_id;

        cout << "Enter Car Company Name: ";
        cin >> car_company_name;

        cout << "Enter Car Color: ";
        cin >> car_color;

        cout << "Enter Car Model: ";
        cin >> car_model;

        cout << "Enter Car Release Year: ";
        cin >> car_release_year;
    }

    void displayData()
    {
        cout << "\nCar ID: " << car_id;
        cout << "\nCompany Name: " << car_company_name;
        cout << "\nColor: " << car_color;
        cout << "\nModel: " << car_model;
        cout << "\nRelease Year: " << car_release_year << endl;
    }
};

int main()
{
    Car c1, c2, c3, c4;

    cout << "Enter details of Car 1:\n";
    c1.getData();

    cout << "\nEnter details of Car 2:\n";
    c2.getData();

    cout << "\nEnter details of Car 3:\n";
    c3.getData();

    cout << "\nEnter details of Car 4:\n";
    c4.getData();

    cout << endl;

    cout << "\n\n--- Car 1 ---";
    c1.displayData();

    cout << "\n--- Car 2 ---";
    c2.displayData();

    cout << "\n--- Car 3 ---";
    c3.displayData();

    cout << "\n--- Car 4 ---";
    c4.displayData();

    return 0;
}