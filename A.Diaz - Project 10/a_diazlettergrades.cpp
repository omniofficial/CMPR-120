#include <iostream>
#include <string>
using namespace std;

void studentinfo()

{

	/*-------------- STUDENT NAMES --------------*/
	string names[5];

	cout << "Please enter the names of the students: ";
	cin >> names[0] >> names[1] >> names[2] >> names[3] >> names[4];

	double MAX = 100.00;
	double MIN = 0.00;


	/*-------------- STUDENT SCORES + RANGE --------------*/
	double studentscores1[4];
	cout << "Please enter the four test scores of " << names[0] << ": ";
	cin >> studentscores1[0] >> studentscores1[1] >> studentscores1[2] >> studentscores1[3];

	for (int i = 0; i < 4; i++)
	{
		if (studentscores1[i] <= MIN || studentscores1[i] > MAX)
		{
			cout << "Scores less than 0 or greater than 100 are not accepted. Please try again.";
			return;
		}
	}

	/*------*/
	double studentscores2[4];
	cout << "Please enter the four test scores of " << names[1] << ": ";
	cin >> studentscores2[0] >> studentscores2[1] >> studentscores2[2] >> studentscores2[3];

	for (int i = 0; i < 4; i++)
	{
		if (studentscores2[i] <= MIN || studentscores2[i] > MAX)
		{
			cout << "Scores less than 0 or greater than 100 are not accepted. Please try again.";
			return;
		}
	}

	/*------*/
	double studentscores3[4];
	cout << "Please enter the four test scores of " << names[2] << ": ";
	cin >> studentscores3[0] >> studentscores3[1] >> studentscores3[2] >> studentscores3[3];

	for (int i = 0; i < 4; i++)
	{
		if (studentscores3[i] <= MIN || studentscores3[i] > MAX)
		{
			cout << "Scores less than 0 or greater than 100 are not accepted. Please try again.";
			return;
		}
	}

	/*------*/
	double studentscores4[4];
	cout << "Please enter the four test scores of " << names[3] << ": ";
	cin >> studentscores4[0] >> studentscores4[1] >> studentscores4[2] >> studentscores4[3];

	for (int i = 0; i < 4; i++)
	{
		if (studentscores4[i] <= MIN || studentscores4[i] > MAX)
		{ 
			cout << "Scores less than 0 or greater than 100 are not accepted. Please try again.";
			return;
		}
	}

	/*------*/
	double studentscores5[4];
	cout << "Please enter the four test scores of " << names[4] << ": ";
	cin >> studentscores5[0] >> studentscores5[1] >> studentscores5[2] >> studentscores5[3];

	for (int i = 0; i < 4; i++)
	{
		if (studentscores5[i] <= MIN || studentscores5[i] > MAX)
		{
			cout << "Scores less than 0 or greater than 100 are not accepted. Please try again.";
			return;
		}
	}


	/*-------------- AVERAGE CALCULATION  --------------*/
	double sum1 = 0;
	double average1;

	for (int i = 0; i < 4; i++)
	{
		sum1 += studentscores1[i];
	}

	average1 = sum1 / 4;

	/*------*/
	double sum2 = 0;
	double average2;

	for (int i = 0; i < 4; i++)
	{
		sum2 += studentscores2[i];
	}

	average2 = sum2 / 4;

	/*------*/
	double sum3 = 0;
	double average3;

	for (int i = 0; i < 4; i++)
	{
		sum3 += studentscores3[i];
	}

	average3 = sum3 / 4;

	/*------*/
	double sum4 = 0;
	double average4;

	for (int i = 0; i < 4; i++)
	{
		sum4 += studentscores4[i];
	}

	average4 = sum4 / 4;

	/*------*/
	double sum5 = 0;
	double average5;

	for (int i = 0; i < 4; i++)
	{
		sum5 += studentscores5[i];
	}

	average5 = sum5 / 4;


	/*-------------- LETTER GRADES  --------------*/
	char letter_grades[5] = { 'A', 'B', 'C', 'D', 'F' };

	/*------*/
	string lettergrade1;
	if (average1 >= 90.00)
		lettergrade1 = letter_grades[0];
	else if (average1 >= 80.00 && average1 < 90)
		lettergrade1 = letter_grades[1];
	else if (average1 >= 70.00 && average1 < 80)
		lettergrade1 = letter_grades[2];
	else if (average1 >= 60.00 && average1 < 70)
		lettergrade1 = letter_grades[3];
	else
		lettergrade1 = letter_grades[4];

	/*------*/
	string lettergrade2;
	if (average2 >= 90.00)
		lettergrade2 = letter_grades[0];
	else if (average2 >= 80.00 && average2 < 90)
		lettergrade2 = letter_grades[1];
	else if (average2 >= 70.00 && average2 < 80)
		lettergrade2 = letter_grades[2];
	else if (average2 >= 60.00 && average2 < 70)
		lettergrade2 = letter_grades[3];
	else
		lettergrade2 = letter_grades[4];

	/*------*/
	string lettergrade3;
	if (average3 >= 90.00)
		lettergrade3 = letter_grades[0];
	else if (average3 >= 80.00 && average3 < 90)
		lettergrade3 = letter_grades[1];
	else if (average3 >= 70.00 && average3 < 80)
		lettergrade3 = letter_grades[2];
	else if (average3 >= 60.00 && average3 < 70)
		lettergrade3 = letter_grades[3];
	else
		lettergrade3 = letter_grades[4];

	/*------*/
	string lettergrade4;
	if (average4 >= 90.00)
		lettergrade4 = letter_grades[0];
	else if (average4 >= 80.00 && average4 < 90)
		lettergrade4 = letter_grades[1];
	else if (average4 >= 70.00 && average4 < 80)
		lettergrade4 = letter_grades[2];
	else if (average4 >= 60.00 && average4 < 70)
		lettergrade4 = letter_grades[3];
	else
		lettergrade4 = letter_grades[4];

	/*------*/
	string lettergrade5;
	if (average5 >= 90.00)
		lettergrade5 = letter_grades[0];
	else if (average5 >= 80.00 && average5 < 90)
		lettergrade5 = letter_grades[1];
	else if (average5 >= 70.00 && average5 < 80)
		lettergrade5 = letter_grades[2];
	else if (average5 >= 60.00 && average5 < 70)
		lettergrade5 = letter_grades[3];
	else
		lettergrade5 = letter_grades[4];

	/*-------------- FORMATTING AVERAGES + LETTER GRADES INTO ARRAYS --------------*/
	double arrayaverages[5] = { average1, average2, average3, average4, average5 };
	string arraylettergrades[5] = { lettergrade1, lettergrade2, lettergrade3, lettergrade4, lettergrade5 };

	/*-------------- FINAL OUTPUT  --------------*/
	cout << "\n\n";
	cout << "\t\tGRADE BOOK SUMMARY\n";
	cout << "\t\t___________________\n\n";
	cout << "\tStudent" << "\t\t" << "Average" << "\t\t" << "Letter Grade" << endl;
	cout << "\t------------------------------------------ \n";

	for (int i = 0; i < 5; i++)
	{
		cout << "\t" << names[i] << "\t\t" << arrayaverages[i] << "\t\t" << arraylettergrades[i] << endl;

	}

}



int main()
{
	studentinfo();
	cout << "\n";
	system("pause");
	return 0;
}
