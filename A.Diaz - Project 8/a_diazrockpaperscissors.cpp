#include <iostream>
#include <string>
using namespace std;
int main()
{ /*My Variables*/
	string player_choice;
	int computer_choice;

	/*Random Number Gen*/
	srand(time(NULL));
	computer_choice = rand() % 3 + 1;

	cout << "\t\t\tRock, Paper, Scissors Game\n";
	cout << "\t\t\t--------------------------\n";
	cout << "Please type either rock, paper, or scissors (in lowercase): "; 
	getline (cin, player_choice);
	cout << "You have chosen " << player_choice << ".\n";

	/*Display of randomized computer choice*/
	if (computer_choice == 1)
	{
		cout << "The computer has chosen rock.\n";
	}

	else if (computer_choice == 2)
	{
		cout << "The computer has chosen paper.\n";
	}

	else if (computer_choice == 3)
	{
		cout << "The computer has chosen scissors.\n";
	}

	/*Logic for Rock paper scissors and user input*/
	if (player_choice == "rock")
	{
		if (computer_choice == 1)
			cout << "Oh no! You both picked rock and tied! Please replay the game to determine a winner.\n";
		else if (computer_choice == 2)
			cout << "Oh no! Paper beats rock. You lost.\n";
		else if (computer_choice == 3)
			cout << "Congratulations! Rock beats scissors. You won!\n";
	}

	else if (player_choice == "paper")
	{
		if (computer_choice == 1)
			cout << "Congratulations! Paper beats rock. You won!\n";
		else if (computer_choice == 2)
			cout << "Oh no! You both picked paper and tied! Please replay the game to determine a winner.\n";
		else if (computer_choice == 3)
			cout << "Oh no! Scissors beats paper. You lost.\n";
	}

	else if (player_choice == "scissors")
	{
		if (computer_choice == 1)
			cout << "Oh no! Rock beats scissors. You lost.\n";
		else if (computer_choice == 2)
			cout << "Congratulations! Scissors beats paper. You won!\n";
		else if (computer_choice == 3)
			cout << "Oh no! You both picked scissors and tied! Please replay the game to determine a winner.\n";
	}
	system("pause");
	return 0;
}