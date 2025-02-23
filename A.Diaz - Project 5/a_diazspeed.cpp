#include <iostream>
using namespace std;
int main()
{	/*My Variables*/
	double distance;
	double speed;
	double time;

	/*User Input*/
	cout << "What is the speed of the vehicle in mph?\n";
	cin >> speed;

	if (speed < 0)
		cout << "No solutions will be calculated for a leading coefficient of 0. ";

	else
	{
		cout << "How many hours has it traveled? \n";
		cin >> time;

		if (time < 1)
		{
			cout << "No solutions will be calculated for a time value less than 1. ";
		}

		/*Moves here if all previous conditions are not satisified*/
		else
		{
		cout << "Hour\t\t\tDistance Traveled\n";
		cout << "****************************************\n";
			/*i will display x amount of times (x being time variable)*/
			for (int i = 1; i <= time; i++)
			{
				distance = speed * i;
				cout << i << "\t\t\t" << distance << endl;
			}

		}
		
	}
	system("pause");
	return 0;
}
