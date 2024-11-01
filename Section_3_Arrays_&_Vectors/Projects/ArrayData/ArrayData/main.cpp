/*
	* Use standard input
		* Use either the array class or build in arrays
		* Read five integers into the array
		* loop through the array of integers, and print twice
		  their amount 
*/

#include <iostream>
#include <array>

using namespace std;

int main()
{
	// Create an array with a size of 5
	const int ARRAY_SIZE = 5;
	array<int, ARRAY_SIZE> intArray{};

	// Ask the user for input for each column in the array
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << "Enter an integer" << endl;
		cin >> intArray[i];
	}
	
	cout << "Now here are double the amounts:" << endl;

	// Print every value in the array doubled
	for (int i : intArray)
	{
		cout << i * 2 << endl;
	}

	return 0;
}