/*
	* Use a for loop to populate an array
		* size should be 10
		* populate the array with the numbers 1-10
		* use the loop, dont do it manually
	* with a seperate range base for loop, print out
	  the values of that array
*/

#include <iostream>

using namespace std;

int main()
{
	const int ARRAY_SIZE = 10;
	int myArray[ARRAY_SIZE];

	// Loop through every number in the array
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		// Set the value to 1, 2, 3, consectutively building
		myArray[i] = i + 1;
		
	}

	// Print the value
	for (int num : myArray)
	{
		cout << num << endl;
	}
}