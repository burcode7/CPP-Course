#include <iostream>
#include <vector>
#include <string>

using namespace std;


/*
	A vector is very similar to an array. The biggest difference is that 
	an array has a set size, while a vector does not. A vectors size can
	be set, but it is also malleable.

	SIX BASIC FUNCTIONS FOR A VECTOR:
		* front - returns the front element
		* back - returns the back element
		* pop_back - removes the element at the end
		* insert - insert the element in a specific location, it has to be an interator
		* begin - returns the beginning of the vector
		* push_back - pushes a value to the back
*/
int main()
{
	// Create a integer vector without a size
	vector<int> someVec;

	// Create a string vector with a size of 3
	vector<string> anotherVec(3);

	// Add the numbers "1, 2, 3" to the back of the vector consecutively
	someVec.push_back(1);
	someVec.push_back(2);
	someVec.push_back(3);

	// Print the size of the vector
	cout << "someVec size: " << someVec.size() << endl;

	// Set each cell in the vector to a name
	anotherVec[0] = "John";
	anotherVec[1] = "Bob";
	anotherVec[2] = "Sally";

	// Push one more name to the back, adding one to the vector, making it bigger
	anotherVec.push_back("Shannon");

	// Print all the values in someVec
	for (int val : someVec)
	{
		cout << val << endl;
	}

	cout << endl;

	// Print all the names in anotherVec
	for (string name : anotherVec)
	{
		cout << name << endl;
	}

	// Prints the front and back
	cout << "Front and back:" << endl;
	cout << "front: " << anotherVec.front() << endl;
	cout << "back: " << anotherVec.back() << endl;

	// Gets rid of the back, which is shannon
	anotherVec.pop_back();
	// Inserts "Don" into the front
	anotherVec.insert(anotherVec.begin(), "Don");

	// Print the new front and back
	cout << "now, front is " << anotherVec.front() << endl;
	cout << "now, back is " << anotherVec.back() << endl;

	return 0;
}