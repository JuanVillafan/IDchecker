#include <iostream>
#include "IDcheck.h"
using namespace std;

int main()
{
// Valid IDs will always have 6 characters, start with 2 characters, and end with 4 numbers
	string customerID = "jv2705";
	string invalidID = "j2705";
	string invalidID2 = "27JV05";
	string userID;
	cout << "Test 1 : Valid ID" << endl;
	ID::IDcheck(customerID);
	cout << "____________________" << endl;

	cout << "Test 2 : Invalid ID #1" << endl;
	ID::IDcheck(invalidID);
	cout << "____________________" << endl;

	cout << "Test 3 : Invalid ID #2" << endl;
	ID::IDcheck(invalidID2);
	cout << "____________________" << endl;

	cout << "Test 4 : User ID" << endl << "_________________" << endl;

	cout << "Input your own ID : ";
	getline(cin, userID);

	ID::IDcheck(userID);
}
