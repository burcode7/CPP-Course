/*
	Use continue statement to loop and only print
	the even numbers 0-10
*/

#include <iostream>

using namespace std;

int main()
{
	for (int i = 0; i < 10; i++)
	{
		// Checks if there is a remainder when dividing by 2
		if (i % 2 == 0)
		{
			cout << i << endl;
		}
	}

	/*int count = 0;

	while (count < 10)
	{
		if (count % 2 != 0)
		{
			count++;
			continue;
		}
		cout << count << endl;
		count++;
	}*/
	return 0;
}