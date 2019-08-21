#include <iostream>
using namespace std;

int main() {

	string password = "Access";
	string pw_input;
	int opt_input;
	int counter = 0;

	do {
	cout << "Password: " << flush;
	cin >> pw_input;
	} while(password != pw_input);

	while(counter < 3) {

		cout << endl << "The following options are available:" << endl;
		cout << "1 Linux" << endl;
		cout << "2 Mac" << endl;
		cout << "3 Windows" << endl;

		cout << "Choose your option: " << flush;
		cin >> opt_input;

		if(opt_input == 1) {
			cout << "You chose Linux" << endl;
		} else if(opt_input == 2) {
			cout << "You chose Mac" << endl;
		} else if(opt_input == 3) {
			cout << "You chose Windows" << endl;
		} else {
			cout << "Please enter a number between 1 and 3" << endl;
		}
		counter ++;
	}
	return 0;

}
