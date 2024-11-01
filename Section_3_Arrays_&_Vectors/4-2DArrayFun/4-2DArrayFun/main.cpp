#include <iostream>

using namespace std;

int main()
{
	// Creates a 2d array, that has 2 rows and 3 columns
	int myNums[2][3]
	{
		{1, 2, 3}, // Row one
		{4, 5, 6} // Row two
	};

	// Prints the value at row 0, column 2. Which is 3 ( remember computers count from 0 )
	cout << myNums[0][2] << endl;

	// Sets the 2nd row column 1 to 14
	myNums[1][0] = 14;

	cout << myNums[1][0] << endl << endl;

	// Goes through each row in the array
	for (int row = 0; row < 2; row++)
	{
		// Goes through each column in each row
		for (int column = 0; column < 3; column++)
		{
			// print where we are in the array
			cout << myNums[row][column] << " ";
		}
		cout << endl;
	}

	return 0;
}