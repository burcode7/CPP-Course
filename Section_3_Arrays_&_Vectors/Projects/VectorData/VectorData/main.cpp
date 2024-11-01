/*
	* Use standard input
	* Only accept non-negative integers greater than 0
	* Accept any amount of integers and store them in a vector
	* End the loop when the user enters a negative integer
	* Print twice the value of the elements in the vector
*/

#include <iostream>
#include <vector>

using namespace std;

int main()
{
	vector<int> myIntVec;
	int num;

	do
	{
		cout << "Please enter a positive integer, negative to quit" << endl;
		cin >> num;
		if (num > 0)
			myIntVec.push_back(num);

	} while (num >= 0);

	cout << endl;
	cout << "Now here are double their values:" << endl;
	
	for (int i : myIntVec)
	{
		cout << i * 2 << endl;
	}
	return 0;
}