#include <iostream>
#include <math.h>
using namespace std;
int main()
{	/*My Variables*/
	double loan_amount;
	double annual_interest;
	double monthly_interest;
	double numbof_payments;
	double monthly_payment;
	double amount_paid;
	double interest_paid;
	double power_shortcut;

	cout << "\t\t\t\tUSER INPUT FOR LOAN INFORMATION" << endl;
	cout << "What is your loan amount?";
	cin >> loan_amount;

	cout << "How many payments are you planning to make?";
	cin >> numbof_payments;

	cout << "What is your monthly interest rate? (in decimal form):";
	cin >> monthly_interest;

	/*Power shortcut is the (1+Rate)^n*/
	power_shortcut = pow((1 + monthly_interest), numbof_payments);
	monthly_payment = loan_amount * ((monthly_interest * power_shortcut) / (power_shortcut - 1));
	amount_paid = monthly_payment * numbof_payments;
	interest_paid = amount_paid - loan_amount;

	/*Output*/
	cout << "\a\a\t\t\t************************\n";
	cout << "\t\t\t\tSUMMARY" << endl;
	cout << "Loan Amount: $" << loan_amount << endl;
	/*Converts to percentage*/
	if (monthly_interest < 1) {

		cout << "Monthly Interest Rate (percentage): " << monthly_interest * 100 << "%" << endl;
	}
	cout << "Monthly Interest Rate (decimal): " << monthly_interest << endl;
	cout << "Number of Payments: " << numbof_payments << endl;
	cout << "Monthly Payment: $" << monthly_payment << endl;
	cout << "Amount Paid Back: $" << amount_paid << endl;
	cout << "Interest Paid: $" << interest_paid << endl;
	system("pause");
}