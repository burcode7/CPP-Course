/*
	Generate a ten die rolls, 6 sides
	Print out each one as we go along
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main()
{
	srand(time(nullptr));

	int dice;

	for (int i = 0; i < 10; i++)
	{
		dice = rand() % 6 + 1;
		cout << dice << endl;
	}
	return 0;
}