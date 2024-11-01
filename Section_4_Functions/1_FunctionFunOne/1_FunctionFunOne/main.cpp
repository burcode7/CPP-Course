#include <iostream>

using namespace std;

// Declares a function called "print something"
void printSomething();

int main()
{
	// Calls print something
	printSomething();

	return 0;
}

// Gives the function a definition, or instructions
void printSomething()
{
	cout << "Hey! Look I'm here!" << endl;
}