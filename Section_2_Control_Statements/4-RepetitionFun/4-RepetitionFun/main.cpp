#include <iostream>

using namespace std;

int main()
{
	//int count = 0;
	//
	//// Repeats as long as the condition is true
	//while (count < 10)
	//{
	//	cout << count << endl;
	//	count++;
	//}

	//// Runs once, then checks if the condition is true to decide if it keeps going
	//int count2 = 10;
	//do
	//{
	//	cout << count2 << endl;
	//	count2++;
	//} while (count2 < 10);

	///*
	//	For loop is perfect for counters. 
	//	Initializes a variable, checks the coniditon, and increments all in one
	//*/
	//for (int i = 0; i < 10; i++)
	//{
	//	cout << i << endl;
	//}

	// Priming read
	int input;
	cout << "Please enter a non-negative integer to continue, ";
	cout << "or negative if you want to quit" << endl;

	cin >> input;
	while (input >= 0)
	{
		cout << input << endl;
		cout << "Please enter a non-negative integer to continue, ";
		cout << "or negative if you want to quit" << endl;

		cin >> input;
	} // end loop




	return 0;
}