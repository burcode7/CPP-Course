/*
	* Loop through integers 0-50
	* Print out whether each integer is odd or even
	"____ is odd" or "____ is even"
*/

#include <iostream>


using namespace std;

int main()
{
	for (int i = 0; i <= 50; i++)
	{
		if (i % 2 == 0)
		{
			cout << i << " is even" << endl;
		}
		else
		{
			cout << i << " is odd" << endl;
		}
	}
	return 0;
}
