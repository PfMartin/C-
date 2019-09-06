#include <iostream>
using namespace std;

int main() {
	int values[3];
	values[0] = 88;
	values[1] = 123;
	values[2] = 7;

	cout << values[0] << endl;
	cout << values[1] << endl;
	cout << values[2] << endl;

	double numbers[4] = {4.5, 2.3, 7.2, 2.3};

	cout << numbers[1] << endl;
	cout << "It should be 2.3" << endl;

	for(int i=0; i<4; i++) {
		cout << "Element index: " << numbers[i] << endl;
	}

	//initializing an empty array
	int empty_array[8] = {};
	for(int i=0; i<8; i++) {
		cout << "Index of the empty array: " << empty_array[i] << endl;
	}

	return 0;
}
