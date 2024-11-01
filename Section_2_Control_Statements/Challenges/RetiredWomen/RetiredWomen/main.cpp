/*
	* Prompt user for age and gender
	* Age is int, gender is character
	* Get if they are f or F and if they are 60 or older
	* If they are, print the qualify for the discount
	* Else, print they do not
*/
#include <iostream>

using namespace std;

int main()
{
	int age;
	char gender;

	cout << "Please enter your age" << endl;
	cin >> age;

	cout << "Please enter your gender" << endl;
	cin >> gender; 

	if ((gender == 'f' || gender == 'F') && age >= 60)
	{
		cout << "You qualify for the discount!" << endl;
	}
	else
	{
		cout << "You do not qualify for the discount!" << endl;
	}
	
	return 0;
}