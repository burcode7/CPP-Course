/*
	* Create a vector and add to it the name of five friends,
	  family memebers, pets, celebrities - whatever you want
	* After adding those five, insert "John Baugh" as the third element
	* After that, remove the last element of the vector
	* Print the elemenets remaining
*/

#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main()
{
	// Create a vector
	vector<string> peopleVec;

	// Add five people to it
	peopleVec.push_back("Ben");
	peopleVec.push_back("Jael");
	peopleVec.push_back("Ethan");
	peopleVec.push_back("Seth");
	peopleVec.push_back("David");

	// Insert "John Baugh" as the third element
	peopleVec.insert(peopleVec.begin() + 2, "John Baugh");

	// Remove the last element (sorry David!)
	peopleVec.pop_back();

	// Print the remaining elements
	for (string i : peopleVec)
	{
		cout << i << endl;
	}
}