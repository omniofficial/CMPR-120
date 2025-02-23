#include <iostream>
using namespace std;
int main()

{	/*My Variables*/
	double celcius;
	double farenheit;

	cout << "Farenheit\t\t\tCelcius\n";
	cout << "****************************************\n";

	/*i is essentially farenheit. Need to use double due to decimals rather than int.*/
	for (double i = 0; i <= 20; i++)
	{
		celcius = ((5.00/9.00) * (i - 32.00));
		cout << i << "\t\t\t" << celcius << endl;
	}
	system("pause");
	return 0;
}