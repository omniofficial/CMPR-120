#include <iostream>
#include <fstream>
using namespace std;

int main()
{
/*My Variables*/
const int size = 18;
int accountnumbers[size] = {};
int count;
int search;
int position = 0;

/*Reading from file to put into array.*/
ifstream inputfile;
inputfile.open("numtextfile.txt");

count = 0;
while (!inputfile.eof())
{
	inputfile >> accountnumbers[count];
	count++;
}

/*Search is considered the number the user is searching for.*/
cout << "Please enter a charge account number: ";
cin >> search;

/*Need to use bool variable in order to display the invalid info (so it doesn't loop when placing an if statement inside the loop)*/
bool satisfied = false;
for (int i = 0; i < 18; i++)
{
	if (accountnumbers[i] == search)
	{
		cout << "The charge account number is valid. It was found at index number: " << i << " " << endl;
		satisfied = true;
	}
}

/*False = Invalid*/
if (satisfied == false)
{
	cout << "The charge account number is invalid. It is not found in our array. ";
}


	system("pause");
	return 0;
}


