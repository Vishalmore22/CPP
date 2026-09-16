// Define a class named `Employee` with private attributes `name`, `salary`, and `designation`. Encapsulate these attributes using appropriate access specifiers. Implement public member functions to set and get the values of these attributes. Demonstrate the encapsulation concept by accessing these attributes through the member functions.
#include <iostream>
using namespace std;

class Employee
{
private:
    string name;
    int salary;
    string designation;

public:
    void setName(string n)
    {
        name = n;
    }

    void setSalary(int s)
    {
        salary = s;
    }

    void setDesignation(string d)
    {
        designation = d;
    }

    string getName()
    {
        return name;
    }

    int getSalary()
    {
        return salary;
    }

    string getDesignation()
    {
        return designation;
    }
};

int main()
{
    Employee e;

    e.setName("Rahul");
    e.setSalary(25000);
    e.setDesignation("Software Developer");

    cout << "Employee Name: " << e.getName() << endl;
    cout << "Employee Salary: " << e.getSalary() << endl;
    cout << "Employee Designation: " << e.getDesignation() << endl;

    return 0;
}