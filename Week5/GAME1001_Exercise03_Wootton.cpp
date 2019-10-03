/*
By: Nicholas Wootton
Student ID: 101 243 844
Date Created:
Date Last Edited:
Whats is this?


#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	//Prices for child / senior tickets (%)
	const double childPrice = 0.5;
	const double seniorPrice = 0.8;

	//Menu items for user input
	const int adultInput = 1;
	const int childInput = 2;
	const int seniorInput = 3;
	const int doneInput = 4;

	//Holds user input
	int selection = 0;

	//Price for one ticket
	double ticketPrice = 20;

	//Has input and output, loops till user enters a '4' to exit
	while (!(selection == doneInput)) {
		cout << "Which ticket type do you require? Enter a number between 1-4.\n";
		cout << "1: Adult  - (Age.15-64)\n";
		cout << "2. Child  - (Age.0-14)\n";
		cout << "3. Senior - (Age65+)\n";
		cout << "4. Done\n";
		cin >> selection;

		//checks input then outputs ticket price based on input
		if (selection == adultInput) {
			cout << "Price: $" << ticketPrice << endl;
		}
		else if (selection == childInput) {
			cout << "Price: $" << ticketPrice * childPrice << endl;
		}
		else if (selection == seniorInput) {
			cout << "Price: $" << ticketPrice * seniorPrice << endl;
		}
		else if (selection != 4) {
			cout << "Invalid Input.\n";
		}
	}
	system("pause");
}
*/
