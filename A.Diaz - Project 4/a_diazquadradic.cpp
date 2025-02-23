#include <iostream>
#include <cmath> 
using namespace std;

int main()
{	/*My Variables*/
	double a;
	double b;
	double c;
	double eq1;
	double eq2;
	double real;
	double imagine;
	double discrim;

	cout << "\a\a\t\t\tAdrian Diaz\n";
	cout << "This program will provide solutions for an equation of the form\n";
	cout << "\a\a\t\t\tA*x^2 + B*x + C = 0,\n";
	cout << "where A, B and C are integers, and A is not equal to zero.\n";
	cout << "\a\a\t\t\t************************\n";

	cout << "Please enter the coefficients A, B, and C:\n";
	cin >> a >> b >> c;

	/*Need to put double equal sign to show exact number*/
	if (a == 0)
		cout << "No solutions wil be calculated for a leading coefficient of 0. ";

	/* Moves to this one if previous if statement is not fufilled*/
	else
	{
	/*Discriminator equals b squared - 4ac*/
		discrim = pow(b, 2) - 4 * a * c;
		
	/*Because the discrim is positive, there will be two solutions*/
		if (discrim > 0)
		{
		/*Positive Equation*/
			eq1 = (-b + sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
		/*Negative Equation*/
			eq2 = (-b - sqrt((pow(b, 2) - 4 * a * c))) / (2 * a);
			cout << "The two real solutions are:\n";
			cout << "x = " << eq1 << " and x = " << eq2 << endl;
		}
		else if (discrim == 0)
		{
			eq1 = -b / (2 * a);
			cout << "The one real solution is:\n";
			cout << "x = " << eq1 << endl;
		}
		/*This else statement introduces imaginary numebers if discrim is negative*/
		else 
		{
			real = -b / (2 * a);
			imagine = sqrt(discrim * -1) / (2 * a);
			cout << "The two imaginary solutions are:\n";
		/*Because a square root can be positive and negative, there are two solutions below*/
			cout << "x = " << real << " + " << imagine << "i\n";
			cout << "\a\a\t\t\tand\n";
			cout << "x = " << real << " - " << imagine << "i\n";

		}
	}
	system("pause");
	return 0;
}	