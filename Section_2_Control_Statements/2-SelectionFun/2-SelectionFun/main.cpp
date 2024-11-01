#include <iostream>

using namespace std;

int main()
{
	int age;
	
	cout << "Welcome to the Pub and Grille!" << endl;
	cout << "Please enter your age" << endl;
	cin >> age;

	// Run the code if the condition is true
	if (age >= 21)
	{
		cout << "Here, have a beer!" << endl;
	}
	// Only runs if the above the condition is false and the current condition is true
	else if (age >= 16)
	{
		cout << "Here, have a coke!" << endl;
		cout << "And, at least you can drive!" << endl;
	}
	// Only run if none of the above conditions are true
	else
	{
		cout << "Here, have a coke!" << endl;
	}
	
	cout << "Thanks for coming to the Pub and Grille!" << endl;
	return 0;
}