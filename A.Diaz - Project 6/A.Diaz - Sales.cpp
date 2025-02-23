#include <iostream>
using namespace std;
int main()
{	/*My Variables*/
	double sales_1;
	double sales_2;
	double sales_3;
	double sales_4;
	double sales_5;
	double asterik_1;
	double asterik_2;
	double asterik_3;
	double asterik_4;
	double asterik_5;

	/*User Input*/
	cout << "Enter today's sales for store 1: ";
	cin >> sales_1;

	cout << "Enter today's sales for store 2: ";
	cin >> sales_2;

	cout << "Enter today's sales for store 3: ";
	cin >> sales_3;

	cout << "Enter today's sales for store 4: ";
	cin >> sales_4;

	cout << "Enter today's sales for store 5: ";
	cin >> sales_5;


	/*Asterik Setup*/
	/*Amount of asteriks to display per store sale amount*/
	asterik_1 = sales_1 / 100;
	asterik_2 = sales_2 / 100;
	asterik_3 = sales_3 / 100;
	asterik_4 = sales_4 / 100;
	asterik_5 = sales_5 / 100;

	cout << "\n\n\t\t\tSales Bar Chart\n";
	cout << "\t\t\t(Each * = $100)\n";
	cout << "\t\t\t-------------------\n";

	/*This loop will keep displaying asteriks until the for loop remains false. This way it won't run infinitely.*/
	cout << "Store 1: ";
	for (int i = 0; i < asterik_1; i++)
		cout << "*";
		cout << endl;

	cout << "Store 2: ";
	for (int i = 0; i < asterik_2; i++)
		cout << "*";
		cout << endl;

	cout << "Store 3: ";
	for (int i = 0; i < asterik_3; i++)
		cout << "*";
		cout << endl;

	cout << "Store 4: ";
	for (int i = 0; i < asterik_4; i++)
		cout << "*";
		cout << endl;

	cout << "Store 5: ";
	for (int i = 0; i < asterik_5; i++)
		cout << "*";
		cout << endl;

	system("pause");
	return 0;
}