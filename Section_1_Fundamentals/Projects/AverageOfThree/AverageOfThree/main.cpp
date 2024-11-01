/*
	* Prompt user for three doubles (num1, num2, num3)
	* Calculate the mean value (average), which is the sum of the numbers,
	  divided by how many numbers are being averaged
*/
#include <iostream>

using namespace std;

int main()
{
	double num1;
	double num2;
	double num3;
	double average;

	cout << "Num 1: ";
	cin >> num1;

	cout << "Num 2: ";
	cin >> num2;

	cout << "Num 3: ";
	cin >> num3;

	average = (num1 + num2 + num3) / 3;
	cout << "Average: " << average;


	return 0;
}