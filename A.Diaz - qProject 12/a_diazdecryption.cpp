#include <iostream>
#include <fstream>
#include <cctype>
using namespace std;

int main()
{
	/*-------------- VARIABLES --------------*/
	const int size = 15;
	static char encryptedtext[size] = {};
	int count;
	char originalchar0[101] = {};
	char decrypted0[101] = {};
	char originalchar1[101] = {};
	char decrypted1[101] = {};
	char originalchar2[101] = {};
	char decrypted2[101] = {};
	char originalchar3[101] = {};
	char decrypted3[101] = {};
	char originalchar4[101] = {};
	char decrypted4[101] = {};
	char originalchar5[101] = {};
	char decrypted5[101] = {};
	char originalchar6[101] = {};
	char decrypted6[101] = {};
	char originalchar7[101] = {};
	char decrypted7[101] = {};
	char originalchar8[101] = {};
	char decrypted8[101] = {};
	char originalchar9[101] = {};
	char decrypted9[101] = {};
	char originalchar10[101] = {};
	char decrypted10[101] = {};
	char originalchar11[101] = {};
	char decrypted11[101] = {};
	char originalchar12[101] = {};
	char decrypted12[101] = {};
	char originalchar13[101] = {};
	char decrypted13[101] = {};
	char originalchar14[101] = {};
	char decrypted14[101] = {};


	/*-------------- INPUT FILE UPLOAD --------------*/
	ifstream inputfile;
	inputfile.open("encryptedtext.txt");

	count = 0;
	while (!inputfile.eof())
	{
		inputfile >> encryptedtext[count];
		count++;
	}


	/*-------------- ENCRYPTED NUMBER VALUE FOR EACH CHARACTER IN ENCRYPTED TEXT FILE (IN ORDER) --------------*/
	int encryptednumbers[15] = { '58', '109', '109', '90', '92', '100', '120', '90', '109', '120', '93', '90', '112', '103', '121' };


	/*-------------- CALCULATING ORIGINAL CHARACTERS FOR EACH ENCRYPTED NUMBER --------------*/
	/*---0---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar0[i] = 153 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar0[i] + i > 126)
		{
			decrypted0[i] = 153 - i;
		}
		else
		{
			decrypted0[i] = 58 - i;
		}
	}

	/*---1---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar1[i] = 204 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar1[i] + i > 126)
		{
			decrypted1[i] = 204 - i;
		}
		else
		{
			decrypted1[i] = 109 - i;
		}
	}

	/*---2---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar2[i] = 204 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar2[i] + i > 126)
		{
			decrypted2[i] = 204 - i;
		}
		else
		{
			decrypted2[i] = 109 - i;
		}
	}

	/*---3---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar3[i] = 185 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar3[i] + i > 126)
		{
			decrypted3[i] = 185 - i;
		}
		else
		{
			decrypted3[i] = 185 - i;
		}
	}

	/*---4---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar4[i] = 187 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar4[i] + i > 126)
		{
			decrypted4[i] = 187 - i;
		}
		else
		{
			decrypted4[i] = 187 - i;
		}
	}

	/*---5---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar5[i] = 195 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar5[i] + i > 126)
		{
			decrypted5[i] = 195 - i;
		}
		else
		{
			decrypted5[i] = 195 - i;
		}
	}

	/*---6---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar6[i] = 215 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar6[i] + i > 126)
		{
			decrypted6[i] = 215 - i;
		}
		else
		{
			decrypted6[i] = 215 - i;
		}
	}

	/*---7---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar7[i] = 185 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar7[i] + i > 126)
		{
			decrypted7[i] = 185 - i;
		}
		else
		{
			decrypted7[i] = 185 - i;
		}
	}

	/*---8---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar8[i] = 204 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar8[i] + i > 126)
		{
			decrypted8[i] = 204 - i;
		}
		else
		{
			decrypted8[i] = 204 - i;
		}
	}

	/*---9---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar9[i] = 215 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar9[i] + i > 126)
		{
			decrypted9[i] = 215 - i;
		}
		else
		{
			decrypted9[i] = 215 - i;
		}
	}

	/*---10---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar10[i] = 188 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar10[i] + i > 126)
		{
			decrypted10[i] = 188 - i;
		}
		else
		{
			decrypted10[i] = 188 - i;
		}
	}

	/*---11---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar11[i] = 185 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar11[i] + i > 126)
		{
			decrypted11[i] = 185 - i;
		}
		else
		{
			decrypted11[i] = 185 - i;
		}
	}

	/*---12---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar12[i] = 207 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar12[i] + i > 126)
		{
			decrypted12[i] = 207 - i;
		}
		else
		{
			decrypted12[i] = 207 - i;
		}
	}

	/*---13---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar13[i] = 198 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar13[i] + i > 126)
		{
			decrypted13[i] = 198 - i;
		}
		else
		{
			decrypted13[i] = 198 - i;
		}
	}

	/*---14---*/
	for (int i = 0; i < 101; i++)
	{
		originalchar14[i] = 216 - i;
	}

	for (int i = 0; i < 101; i++)
	{
		if (originalchar14[i] + i > 126)
		{
			decrypted14[i] = 216 - i;
		}
		else
		{
			decrypted14[i] = 216 - i;
		}
	}


	/*-------------- PRINTING HEADER AND FULL LIST OF CHARACTERS USING ALL 100 KEYS --------------*/
	cout << "\t\t\t\t" << "ASCII CODE DECRYPTION PROJECT FOR:  :mmZ\dxZmx]Zpgy" << "\n";
	cout << "------------------------------------------------------------------------------------------------------------------------" << "\n";

	for (int i = 0; i < 101; i++)
	{
		
		cout << "Key #" << i << ": " << decrypted0[i] << "\t" << decrypted1[i] << "\t" << decrypted2[i] << "\t" << decrypted3[i] << "\t" << decrypted4[i] << "\t" << decrypted5[i] << "\t" << decrypted6[i] << "\t" << decrypted7[i] << "\t" << decrypted8[i] << "\t" << decrypted9[i] << "\t" << decrypted10[i] << "\t" << decrypted11[i] << "\t" << decrypted12[i] << "\t" << decrypted13[i] << "\t" << decrypted14[i];
		
	}


	/*-------------- TWO STRING FUNCTIONS --------------*/
	cout << "\n\n\n\t\t PROGRAM SUMMARY" << "\n";
	cout << "\t\t-----------------" << "\n";

	char codetext[] = ":mmZ\dxZmx]Zpgy";
	int length;
	length = strlen(codetext) + 1;
	cout << "- Length of encrypted text: " << length << " characters." << "\n";

	const int SIZE = 46;
	char string1[SIZE] = "- 15 loops of 100 characters each", string2[SIZE] = "were displayed.";
	cout << string1 << " ";
	strcpy_s(string1, string2);
	cout << string1 << endl;


	system("pause");
	return 0;

}