#include <iostream>

using namespace std;

int main()
{
	int count = 0;

	/*while (count < 10)
	{
		if (count == 5)
		{
			count++;
			// If the number equals five, it skips the rest of the loop and goes to the next iteration
			continue;
		}
		cout << count << endl;
		count++;
	}*/

	for (int i = 0; i < 10; i++)
	{
		if (i == 5)
		{
			// If the value is true, it stops the loops
			break;
		}
		cout << i << endl;
	}

	return 0;
}