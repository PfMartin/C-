#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	int value1 = 7;
	int value2 = 4;

	if(value1 >= 5) {
		cout << "Condition 1 is true" << endl;
	}
	else {
		cout << "Condition 1 is false" << endl;
	}

	if(value1 == 7 && value2 < 3) { //and in C++
		cout << "Condition 2 is true" << endl;
	}
	else {
		cout << "Condition 2 is false" << endl;
	}

	if(value1 == 7 || value2 < 3) { //or in C++
		cout << "Condition 3 is true" << endl;
	}
	else {
		cout << "Condition 3 is false" << endl;
	}


	return 0;

}
