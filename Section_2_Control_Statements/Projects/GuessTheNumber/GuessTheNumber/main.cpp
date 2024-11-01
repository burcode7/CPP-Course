/*
	* Computer selects a number between 1 and 100
		* User tries to guess the number
		* Track the amount of guesses
	* Print if they get it right and how many guesses
	* Print if they are too high or too low
	* If they pick higher than 100 or lower than 1,
	  it's a wasted guess and they must pick within the margins
*/

#include <iostream>
#include <cstdlib>>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));

	int computerNum = rand() % 100 + 1;
	int guesses = 0;
	int userNum;

	do
	{
		cout << "Enter your guess" << endl;
		cin >> userNum;

		guesses++;
		if (userNum > 100 || userNum < 1)
		{
			cout << "That is a wasted guess! Please enter a number between 1 and 100" << endl;
		}
		else if (userNum > computerNum)
		{
			cout << "Too high!" << endl;
		}
		else if (userNum < computerNum)
		{
			cout << "Too low!" << endl;
		}
		else
		{
			cout << "You guessed it! The number was " << computerNum << endl;
			cout << "You got the number in " << guesses << " guesses!" << endl;
		}
	} while (userNum != computerNum);

	return 0;
}