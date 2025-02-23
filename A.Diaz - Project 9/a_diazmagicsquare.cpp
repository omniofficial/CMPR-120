#include <iostream>
using namespace std;
int main()
{
	/*Variables*/
	const int COLUMNS = 3;
	const int ROWS = 3;
	int first[COLUMNS];
	int second[COLUMNS];
	int third[COLUMNS];

	/*User Input*/
	cout << "This program will determine whther or not your provided numbers will be defined as a Lo Shu Magic Square.\n";
	cout << "\t\t\t-------------------------------------------\n";

	cout << " Please enter the numbers of the first row (in order): ";
	cin >> first[0] >> first[1] >> first[2];

	cout << " Please enter the numbers of the second row (in order): ";
	cin >> second[0] >> second[1] >> second[2];

	cout << " Please enter the numbers of the third row (in order): ";
	cin >> third[0] >> third[1] >> third[2];


	/*To check if any numbers are not in the minimum or maximum range*/
	/*Min is 1, Max is 9*/

	for (int i = 0; i < 3; i++)
	{
		if (first[i] < 1 || first[i] > 9
			|| second[i] < 1 || second[i] > 9
			|| third[i] < 1 || third[i] > 9)
		{
			cout << "The numbers are not within 1 to 9. Please try again.";
			system("pause");
			return 0;
		}
	}

	/*Identification sum is the sum that is required from the row, column, and diagonal.*/
	/*Variables. Diagonal sums start from either left and right and go diagonally.*/
	int identification_sum = first[0] + first[1] + first[2];
	int horizontal_sum[ROWS];
	int vertical_sum[COLUMNS];
	int diagonal_sumtleft;
	int diagonal_sumtright;

	diagonal_sumtleft = first[0] + second[1] + third[2];
	diagonal_sumtright = first[2] + second[1] + third[0];
	
	bool satisfied = true;
	for (int i = 0; i < ROWS; i++) 
	{
		horizontal_sum[i] = vertical_sum[i] = 0;
	}

	for (int i = 0; i < COLUMNS; i++)
	{
		horizontal_sum[0] += first[i];
		horizontal_sum[1] += second[i];
		horizontal_sum[2] += third[i];
	}

	for (int i = 0; i < COLUMNS; i++)
	{
		vertical_sum[i] = first[i] + second[i] + third[i];
	}

	/*Checking if horizontal, vertical, and diagonal sums equal to the identification sum (the sum of the first row).*/
	for (int i = 0; i < ROWS; i++)
	{
		if (horizontal_sum[i] != identification_sum)
			satisfied = false;
	}

	for (int i = 0; i < COLUMNS; i++)
	{
		if (vertical_sum[i] != identification_sum)
			satisfied = false;
	}

	/*If either sums do not equal each other, then the criteria is not met. Therefore, it moves to the else statement.*/
	if (diagonal_sumtleft != identification_sum 
		|| diagonal_sumtright != identification_sum)
		satisfied = false;

	if (satisfied)
	{
		cout << "These numbers do satisfy the requirements. It is considered a Lo Shu Magic Square. ";
	}

	else
	{
		cout << "Unfortunately, it is not a magic square. ";
	}

	system("pause");
	return 0;
}