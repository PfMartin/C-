#include <iostream>
using namespace std;

int main() {

	int value;

	cout << "1. Add new record" << endl;
	cout << "2. Delete record" << endl;
	cout << "3. View record" << endl;
	cout << "4. Search record" << endl;
	cout << "5. Quit" << endl;

	cout << "Enter your selection: " << flush;
	cin >> value;

	if(value == 1) {
		cout << "Record will be added." << endl;
	}
	else if(value == 2) {
		cout << "Record will be deleted." << endl;
	}

	else if(value == 3) {
		cout << "Here are the records." << endl;
	}
	else if(value == 4) {
		cout << "Record will be searched." << endl;
	}
	else if(value == 5) {
		cout << "Program will be quit." << endl;
	}
	else {
		cout << "Invalid option." << endl;
	}


	return 0;
}
