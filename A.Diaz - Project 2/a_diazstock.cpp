#include <iostream>
using namespace std;
int main()
{	/*My Variables*/
	double shares;
	double share_cost;
	double onlystock_cost;
	double commission_cost;
	double total_paid;
	/*Output*/
	cout << "\a\a\t\t\tStock Commission\n";
	cout << "\a\a\t\t\t************************\n";
	cout << "\a\a\t\t\tAmount of stock bought: 750 shares\n";
	cout << "\a\a\t\t\tPrice per share: $35.00\n";
	cout << "\a\a\t\t\tCommission: 2%\n";
	cout << "\a\a\t\t\t************************\n";
	/*The math portion*/
	shares = 750;
	share_cost = 35;
	onlystock_cost = shares * share_cost;
	commission_cost = onlystock_cost * 0.02;
	total_paid = onlystock_cost + commission_cost;
	/*Output*/
	cout << "\t\t\t\tSUMMARY" << endl;
	cout << "Amount paid for stock (no commission): $" << onlystock_cost << endl;
	cout << "Amount paid for commission: $" << commission_cost << endl;
	cout << "Total amount paid: $" << total_paid << endl;
	system("pause");
}