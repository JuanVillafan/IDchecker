#include <iostream>
#include <string>

using namespace std;

namespace ID {
	//Will tell user if ID is valid or invalid
	void IDcheck(string ID){
	// we use 6 because 2 characters + 4 digits is an ID with a length of 6
		if (ID.length() != 6)
			cout << ID <<" is an Invalid ID" << endl;
		else {
			int length = ID.length();

			bool IDvalidation = true;

			for (int i = 0; i < length; i++) {
				if (i < 2) {
					if (isalpha(ID[i]) == false) {
						IDvalidation = false;
						break;
					}
				}
				else if (i >= 2) {
					if (isdigit(ID[i]) == false) {
						IDvalidation = false;
						break;
					}
				}
			}
			if (IDvalidation == false)
				cout << ID << " is an Invalid ID" << endl;
			else
				cout << ID << " is a Valid ID" << endl;
		}
	}

}