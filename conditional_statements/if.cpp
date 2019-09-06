#include <iostream>
using namespace std;

int main() {

	string password = "Martin";
	string input;

	cout << "Enter your password: " << flush;
	cin >> input;

	if(input == password) {
	cout << "'" << "Access declared" << "'" << endl;
	}

	if(input != password) {
	cout << "'" << "Access denied" << "'" << endl;
	}

	return 0;
}
