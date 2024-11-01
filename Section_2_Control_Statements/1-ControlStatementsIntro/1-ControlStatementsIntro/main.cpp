/*
	C O N T R O L  S T A T E M E N T S

	* Three primary categories of control statements
		* Sequential statements (sequence statements)
		* Selection statements (decision statements)
		* Repetition statements (loops)
*/
#include <iostream>

using namespace std;

int main()
{
	int age = 15;
	cout << age << endl;

	// Selection statement that only does something IF the condition is met.
	if (age >= 16)
	{
		cout << "You can drive!" << endl;
	}
	else
	{
		cout << "You cannot drive yet!" << endl;
	}
	
	// Repetition statement. Create a variable, check a condition, and increment until the condition is not met
	for (int i = 1; i <= age; i++)
	{
		cout << "Happy Birthday " << i << endl;
	}

	return 0;
}