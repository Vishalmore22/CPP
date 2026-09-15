// Q.1 Write a Program to create an Employee Record System using the Class and object of any 5 employees. Consider the below-mentioned attributes in the Employee class:
// - emp_id
// - emp_name
// - emp_age
// - emp_role
// - emp_salary
// - emp_city
// - emp_experience
// - emp_company_name

#include <iostream>
using namespace std;

class Employee
{
public:
    int emp_id;
    string emp_name;
    int emp_age;
    string emp_role;
    float emp_salary;
    string emp_city;
    int emp_experience;
    string emp_company_name;

    void input()
    {
        cout << "Enter Employee ID: ";
        cin >> emp_id;

        cout << "Enter Employee Name: ";
        cin >> emp_name;

        cout << "Enter Employee Age: ";
        cin >> emp_age;

        cout << "Enter Employee Role: ";
        cin >> emp_role;

        cout << "Enter Employee Salary: ";
        cin >> emp_salary;

        cout << "Enter Employee City: ";
        cin >> emp_city;

        cout << "Enter Employee Experience: ";
        cin >> emp_experience;

        cout << "Enter Company Name: ";
        cin >> emp_company_name;
    }

    void display()
    {
        cout << "Employee ID: " << emp_id << endl;
        cout << "Employee Name: " << emp_name << endl;
        cout << "Employee Age: " << emp_age << endl;
        cout << "Employee Role: " << emp_role << endl;
        cout << "Employee Salary: " << emp_salary << endl;
        cout << "Employee City: " << emp_city << endl;
        cout << "Employee Experience: " << emp_experience << " years" << endl;
        cout << "Company Name: " << emp_company_name << endl;
    }
};

int main()
{
    Employee e[5];

    e[0].input();
    cout << endl;
    e[0].display();

    return 0;
}