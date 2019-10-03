/*
By: Nicholas Wootton
Student ID: 101 243 844
Date Created: Oct.03
Date Last Edited: Oct.03
Whats is this?
Number Guessing game, not my source code, improved upon though.


#include <ctime>
#include <iostream> // Console input/output.
#include <string>   // Using strings.
using namespace std;

int main() // Entry point for every C++ program.
{
	// Declare variables.
	bool currentPlayer, quitGame = false;
	int randomNum, guess;
	string player1, player2;

	//Used for comparing the user guess to the number
	const int COLD = 40;
	const int WARM = 20;
	const int HOT = 10;
	const int VERY_HOT = 5;

	//Max and Min input
	const int MAX = 100;
	const int MIN = 0;

	// Create random number from 1 to 100 inclusive.
	srand((unsigned)time(NULL)); // Seeds the random number sequence.
	randomNum = 1 + rand() % 100; // Returns 1-100 inclusive

	// Prompt the players for their names.
	cout << "Player 1, enter your name: ";
	cin >> player1;
	cout << "Okay, your name is " << player1 << endl;
	cout << "Player 2, enter your name: ";
	cin >> player2;
	cout << "Okay, your name is " << player2 << endl;

	// Randomize who goes first. You can also use a Boolean.
	currentPlayer = rand() % 2; // Sets currently player to 0 or 1. 

	// Start the game. Main game loop.
	do
	{   // The ?: below is the conditional operator. It's a mini if/else.
		cout << (currentPlayer == 0 ? player1 : player2) << ", enter your guess, "
			<< "between 0-100 inclusive: ";
		cin >> guess; // cin is dangerous. We're not accounting for fail.


		//Checks input for validity, then if it's the correct guess
		//then very hot down to very cold
		if (guess > MAX || guess < MIN) {
			cout << "Invalid Input\n";
		}
		else if (guess == randomNum) {
			cout << "Your guess is correct!" << endl;
			quitGame = true;
		}
		else if (guess - randomNum < VERY_HOT && guess - randomNum > -VERY_HOT) {
			cout << "Very Hot!\n";
		}
		else if (guess - randomNum < HOT && guess - randomNum > -HOT) {
			cout << "Hot.\n";
		}
		else if (guess - randomNum < WARM && guess - randomNum > -WARM) {
			cout << "Warm.\n";
		}
		else if (guess - randomNum < COLD && guess - randomNum > -COLD) {
			cout << "Cold.\n";
		}
		else {
			cout << "Very Cold.\n";
		}

		if (quitGame == false) // Game is still on, switch player.
			currentPlayer = !currentPlayer;
	} while (quitGame == false); // !quitGame or quitGame != true
	cout << (currentPlayer == 0 ? player1 : player2) << " wins!" << endl;

	system("pause"); // Pause the console before closing. Not portable.
	return 0;
}
*/