#include <iostream>
#include <string>

using namespace std;

int main()
{
	int age;
	string fullName;

	cout << "Please enter your name" << endl;
	getline(cin, fullName); // Includes whitespace in "cin"

	cout << "Please enter your age" << endl;
	cin >> age; // Ask the user for input to initialize "age"

	cout << fullName << endl;

	cout << age << endl;

	return 0;
}