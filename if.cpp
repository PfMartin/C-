#include <iostream>
using namespace std;

int main() {

	string password = "Martin";
	string input;

	cout << "Enter your password: " << flush;
	cin >> input;

	if(input == password) {
	cout << "'" << "access declared" << "'" << endl;
	}

	if(input != password) {
	cout << "'" << "access denied" << "'" << endl;
	}

	return 0;
}
