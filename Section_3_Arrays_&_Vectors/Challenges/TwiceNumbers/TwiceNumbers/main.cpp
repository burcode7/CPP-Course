/*
	* Create an integer array object of size 10
	* Use a for loop to initialize the array elements to multiples 
	  of 2 for the integers 0 - 9
		* do NOT manually store the numbers 
	* Hint: consider using the loop control variable to your advantage
	* use size() member function to your advantage
	* use a range-based for loop to print out the elements you stored
*/

#include <iostream>
#include <array>

using namespace std;

int main()
{
	// Create a size 10 int array
	array<int, 10> myIntArray;

	// Assign each value in the array to i * 2, EG: 0 * 2 = 0, 1 * 2 = 2, etc.
	for (int i = 0; i < myIntArray.size(); i++)
	{
		myIntArray[i] = i * 2;
	}
	
	// Print each value in the array
	for (int n : myIntArray)
	{
		cout << n << endl;
	}

	return 0;
}