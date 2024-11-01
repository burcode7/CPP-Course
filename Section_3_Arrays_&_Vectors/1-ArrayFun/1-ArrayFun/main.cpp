#include <iostream>
#include <string>

using namespace std;

int main()
{
	// Initialize an integer array with the size of 5
	const int ARRAY_SIZE = 5;

	int myArray[ARRAY_SIZE];


	string names[4]{ "Bob", "Sally", "John", "Ed" };

	// Give each of the 5 cells a value
	myArray[0] = 15;
	myArray[1] = 20;
	myArray[2] = 22;
	myArray[3] = 13;
	myArray[4] = 6;

	// Iterate through each cell in the array
	for (int i = 0; i < ARRAY_SIZE; i++)
	{
		cout << myArray[i] << endl;
	}

	cout << endl;

	/*for (int i = 0; i < 4; i++)
	{
		cout << names[i] << endl;
	}*/

	// Goes through the array to print every name, works the same as the above loop
	for (auto name : names)
	{
		cout << name << endl;
	}

	return 0;
}