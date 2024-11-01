/*
	* Prompt user for strings:
		* adjective1
		* girlsName
		* adjective2
		* occupation1
		* placeName
		* clothing
		* hobby
		* adjective3
		* occupation2
		* boysName
		* mansName
	* Display in the story:
		There once was a ADJECTIVE1 girl named
		GIRLSNAME who was a ADJECTIVE2
		OCCUPATION1 in the Kingdom of
		PLACENAME. She wanted to marry the
		ADJECTIVE3 OCCUPATION2 named
		BOYSNAME but her father, King
		MANSNAME forbidher from seeing him.
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	string adjective1;
	string adjective2;
	string adjective3;
	string girlsName;
	string boysName;
	string mansName;
	string placeName;
	string clothing;
	string hobby;
	string occupation1;
	string occupation2;

	cout << "Please enter an adjective: ";
	getline(cin, adjective1);

	cout << "Please enter another adjective: ";
	getline(cin, adjective2);

	cout << "Please enter one mroe adjective: ";
	getline(cin, adjective3);

	cout << "Please enter a girls name: ";
	getline(cin, girlsName);

	cout << "Please enter a boys name: ";
	getline(cin, boysName);

	cout << "Please enter a mans name: ";
	getline(cin, mansName);

	cout << "Please enter the name of a place: ";
	getline(cin, placeName);

	cout << "Please enter an article of clothing: ";
	getline(cin, clothing);
	
	cout << "Please enter a hobby: ";
	getline(cin, hobby);

	cout << "Please enter an occupation: ";
	getline(cin, occupation1);
	
	cout << "Finnaly, please enter one more occupation: ";
	getline(cin, occupation2);

	cout << endl;

	cout << "There once was a " << adjective1 << " girl named " << girlsName << " who was a " << adjective2 
		<< " " << occupation1 << " in the Kingdom of " << placeName << ". She loved to wear " << clothing
		<< " and " << hobby << ". She wanted to marry the " << adjective3 << " " << occupation2 << " named " 
		<< boysName << " but her father, King " << mansName << " forbid her from seeing him." << endl;

	return 0;
}