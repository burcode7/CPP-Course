/*
	* Use two vectors, one for names and one for weights
	* Prompt the user for the names and weights of five different people
	* Print out sentences for each person, EG: "Sally weighs 120 lbs"
	* Hint: Use cin.get() for consuming the newline character after
	  obtaining weights, before obtaining the next name

	  E X A M P L E:
	  LOOP THROUGH FIVE TIMES.
	  "-" is the computer
	  "=" is the user

	  - Please enter a person's full name
	  = Silas Gray
	  - Please enter Silas Gray's weight.
	  = 300

	  - Silas Gray weighs 300 lbs
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	const int NUM_PEOPLE = 5;

	vector<string> names;
	string tempName;

	vector<int> weights;
	int tempWeight;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		// Prompt for the name and weight
		cout << "Please enter the full name of a person" << endl;
		// Getline is used for string
		getline(cin, tempName);

		cout << "Please enter " << tempName << "'s weight" << endl;
		cin >> tempWeight;
		
		cin.get(); // Absorb the newline character

		// Add the new data to the back of the vectors
		names.push_back(tempName); 
		weights.push_back(tempWeight);
	}

	cout << endl << endl;

	for (int i = 0; i < NUM_PEOPLE; i++)
	{
		cout << names[i] << " weighs " << weights[i] << " lbs" << endl;
	}

	return 0;
}