#include <iostream>
using namespace std;

int main(){
	string animals[2][3] = {
		{"fox", "dog", "cat"},
		{"mouse", "squirrel", "parrot"}
	};

	int devide = sizeof(animals)/sizeof(string);

	//nested for-loop
	for(int i=0; i<2; i++){
		for(int j=0; j<3; j++){
			cout << animals[i][j] << " " << flush;
		}
		cout << endl;
	}

	cout << "The size of a string: " << sizeof(string) << endl;
	cout << "The size of the array: " << sizeof(animals) << endl;
	cout << "Size of array devided by size of string: " << devide << endl; 

	return 0;
}
