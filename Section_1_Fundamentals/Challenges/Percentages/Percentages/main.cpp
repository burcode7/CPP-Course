#include <iostream>
#include <string>

using namespace std;

int main()
{
	string fullName;
	string location;
	int initialScore;

	cout << "What is your project score? 0 - 100" << endl;
	cin >> initialScore;

	cin.get(); // Makes it so that pressing enter doesn't fall through and skip the next getline

	cout << "Please enter your full name" << endl;
	getline(cin, fullName);

	cout << "Please enter your city, state/providence, and country" << endl;
	getline(cin, location);

	

	cout << "Hello, " << fullName << endl;
	cout << "We heard you are from " << location << endl;
	cout << "Your original score is " << initialScore << endl;
	cout << "But with five points added, your score is now " << (initialScore + 5) << endl;

	return 0;
}