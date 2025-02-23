#include <iostream>
using namespace std;
void main()
{
	/*Double is a numeric value*/
	double rate_perhour;
	double hours_worked;
	double gross_salary;
	double employee_ID;
	/*Information*/
	cout << "\a\a\t\t\tEmployee Salary Records\n";
	cout << "\a\a\t\t\t************************\n";
	cout << "\t\t\tAuthor's Name: Adrian Diaz" << endl;
	cout << "\t\t\tProgram Name: a_diazsalary.cpp" << endl;
	cout << "\t\t\tDate: June 13, 2022" << endl;
	cout << "\t\t\tCollege Name: Santa Ana College (SAC)" << endl;
	cout << "\a\a\t\t\t************************\n";
	/*Giving computer information, cin is like what I want the variable to represent*/
	cout << "What is your employee ID?";
	cin >> employee_ID;

	cout << "How many hours have you worked?";
	cin >> hours_worked;

	cout << "What is your rate per hour?";
	cin >> rate_perhour;
	cout << "\a\a\t\t\t************************\n";
	gross_salary = rate_perhour * hours_worked;
	/*Display of the inputs, /t is a tab.*/
	cout << "\t\t\t\tSUMMARY" << endl;
	cout << "Employee ID: " << employee_ID << endl;
	cout << "Hours Worked: " << hours_worked << endl;
	cout << "Rate per Hour: " << rate_perhour << endl;
	cout << "Gross Salary: " << gross_salary << "/week" << endl;
	system("pause");
}