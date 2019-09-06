#include <iostream>
using namespace std;

int main() {

	const string password = "Ibanez";

	string input;

	//Executes the do part once and the enteres the while loop
	//When the condition is false it gets out of the while loop and goes on with the following lines
	do{
		cout << "Enter your password: " << flush;
		cin >> input;

		if(input != password) {
			cout << "Access denied" << endl;
		}
	}
	while(input != password);

	cout << "Password accepted" << endl;


	return 0;

}
