#include <iostream>
#include <array>

using namespace std;

int main()
{
	//// Create an array object, giving it a type and a size within the < >
	//// The {} automatically sets every cell to 0, you can also do this manually: { 0, 0, 0, 0, 0 }
	//// If you list only a few elements, it automatically sets the remaining as 0
	//array<int, 5> myIntArray{ 1, 2 };

	// Re-assign the values to something different 
	array<int, 5> myIntArray{ 1, 2, 3, 4, 5 };

	myIntArray[0] = 2;
	myIntArray[1] = 5;
	myIntArray[2] = 10;
	myIntArray[3] = 1;
	myIntArray[4] = 17;

	for (int a : myIntArray)
	{
		cout << a << endl;
	}

	cout << "Size of array: " << myIntArray.size() << endl;
	return 0;
}