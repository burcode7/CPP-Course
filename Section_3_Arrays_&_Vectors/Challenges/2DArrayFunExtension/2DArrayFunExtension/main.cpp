/*
	* Add newlines after the nested loop that is already present
	* Use a nested loop to print the numbers in the 2d array backwards
	* output should be:
	 2 5 14
	 3 2 1
*/

#include <iostream>

using namespace std;

int main()
{
	// Creates a 2d array with 2 rows and 3 columns
	int myNums[2][3]
	{
		{ 1, 2, 3 },
		{ 4, 5, 6 }
	};

	myNums[1][0] = 14;

	// Forward
	for (int row = 0; row < 2; row++)
	{
		for (int column = 0; column < 3; column++)
		{
			cout << myNums[row][column] << " ";
		}
		cout << endl;
	}

	// Newlines
	cout << endl << endl;

	// Backward, just reverse the original parameters
	for (int row = 1; row >= 0; row--)
	{
		for (int column = 2; column >= 0; column--)
		{
			cout << myNums[row][column] << " ";
		}
		cout << endl;
	}

	return 0;
}