/*
	Arithmetic operators
	+   addition operator
	-   subtraction operator
	*	multiplication operator
	/	division operator
	%	modulus operator, divides and gives the remainder
*/
#include <iostream>

using namespace std;

int main()
{
	int a = 10;
	int b = 3;
	
	// Declares each variable with MATH
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;

	// Compound arithmetic, adds and assigns
	int result = 10;
	result += 15; // same as " result = result + 15; "

	cout << "Sum = " << sum << endl;
	cout << "Difference = " << difference << endl;
	cout << "Product = " << product << endl;
	cout << "Quotient = " << quotient << endl;
	cout << "Remainder = " << remainder << endl;
	cout << "Result = " << result << endl;
	
	// " myInt++; " adds only one to the variable. Can also decrement:  " myInt--; "
	int myInt = 5;
	cout << myInt << endl;
	myInt++;
	cout << myInt << endl;

	return 0;
}