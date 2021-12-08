#include<iostream>
using namespace std;

class employee
{
	private:
		char employee_name[20];
		int employee_number;
		float basic, da, it, net_salary;
	public:
		void getdata();
		float calc(float basic, float da, float it);
		void display();
	};
	
void employee::getdata()
{
	cout << "Enter employee number: ";
	cin >> employee_number;
	cout << "Enter employee name: ";
	cin >> employee_name;
	cout << "Enter basic salary: ";
	cin >> basic;
}

float employee:: calc(float basic, float da, float it)
{
	da=0.52*basic;
	it=0.3*(basic + da);
	net_salary=(basic + da - it);
	return da, it, net_salary;
}

void display()
{
	cout << "***Employee Details***";
	cout << "Employee Name: " << employee_name;
	cout << "Employee Nmuber: " << employee_number;
	cout << "Basic Salary: " << basic;
	cout << "Daily Allowance: " << da;
	cout << "Income Tax: " << it;
	cout << "Net Salary: " << calc(basic, da, it);	
}

int main()
{
	employee emp;
	emp.getdata();
	emp.calc();
}
