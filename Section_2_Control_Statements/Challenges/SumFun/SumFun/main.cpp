/*
	Do a priming read
	As long as the user enters a positive integer add it to a total
	When they enter a negative, print out the sum
*/

#include <iostream>

using namespace std;

int main()
{
	// Initialize variables
	int input;
	int total = 0;
	
	// Priming read
	cout << "Please enter a positive integer to continue, ";
	cout << "or a negative integer to exit." << endl;

	cin >> input;

	// Loop to add to the total
	while (input >= 0)
	{
		total += input;
		cout << "Please enter a positive integer to continue, ";
		cout << "or a negative integer to exit." << endl;

		cin >> input;
	}

	// Print total
	cout << "Your total is " << total << "!" << endl;
}