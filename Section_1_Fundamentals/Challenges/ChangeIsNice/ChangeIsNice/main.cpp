/*
	Change Is Nice
	Declare a variable myNum and set it to 10
	Increase myNum's original value by 5 using arithmetic operators
	Double myNum's new value three times on three different lines
	Print myNum's final value
*/
#include <iostream>

using namespace std;

int main()
{
	int myNum = 10;

	myNum += 5;
	myNum *= 2;
	myNum *= 2;
	myNum *= 2;

	cout << myNum << endl;

	return 0;
}