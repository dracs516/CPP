#include <iostream>
using namespace std;

class employeeDetails
{

public:
    int employee_id;
    float employee_salary;

    employeeDetails()
    {
        employee_id = 0;
        employee_salary = 0;
    }

    employeeDetails(int id, float sal = 0.0)
    {
        employee_id = id;
        employee_salary = sal;
    }

    employeeDetails(int x, float y)
    {
        employee_id = x;
        employee_salary = y;
    }

    void printInfo()
    {
        cout << "************** Employee Details **************" << endl;
        cout << "Employee ID: " << employee_id << endl;
        cout << "Emp[loyee Salary: " << employee_salary << endl;
    }
};

int main()
{
    employeeDetails e1;
    employeeDetails e2(191);
    employeeDetails e3(198, 1234567652.24536);

    e1.printInfo();
    e2.printInfo();
    e3.printInfo();
    return 0;
}