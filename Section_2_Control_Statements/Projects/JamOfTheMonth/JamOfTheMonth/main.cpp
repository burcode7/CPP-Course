/*
	* First prompt the user for which package they have:
		* Package A:
			* $8/month
			* 2 jams per month
			* Each additional jam on top of the 2 is $5 each
		* Package B:
			* $12/month
			* 4 jams per month
			* $4 per extra jam
		* Package C:
			* $15/month
			* 6 jams per month
			* $3 per extra jam
	* Secondly prompt the user for how many jams they purchased this month in total
	* Take the number of jams purchased and tell the user their total cost
		* IF they stayed at or under the number of jams included in their package,
		  they only owe the monthly fee
		* If they went over, charge the monthly fee PLUS each additional jam
*/

#include <iostream>

using namespace std;

int main()
{
	char whichPackage;
	int howManyJams = 0;
	int monthlyFee = 0;
	int jamsIncluded = 0;
	int jamPrice = 0;
	int totalCost;

	cout << "What package do you own? A, B, or C?" << endl;
	cin >> whichPackage;
	cout << "How many jams, jellies, or preserves did you purchase this month?" << endl;
	cin >> howManyJams;

	if (whichPackage == 'A' || whichPackage == 'a')
	{
		monthlyFee = 8;
		jamsIncluded = 2;
		jamPrice = 5;
	}
	else if (whichPackage == 'B' || whichPackage == 'b')
	{
		monthlyFee = 12;
		jamsIncluded = 4;
		jamPrice = 4;
	}
	else if (whichPackage == 'C' || whichPackage == 'c')
	{
		monthlyFee = 15;
		jamsIncluded = 6;
		jamPrice = 3;
	}
	else
	{
		cout << "You selected a non-existent package." << endl;
	}
	
	if (howManyJams <= jamsIncluded)
	{
		cout << "You owe $" << monthlyFee << endl;
	}
	else
	{
		totalCost = monthlyFee + (howManyJams - jamsIncluded) * jamPrice;
	}

	cout << "You owe $" << totalCost << endl;

	return 0;
}
