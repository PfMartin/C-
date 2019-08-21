#include <iostream>
using namespace std;

int main() {

	for(int i=0; i<10; i++ ) { //initialize variable; end condition; program
		cout << "i is " << i << endl;

		if(i == 3) {
			continue;
		}

		cout << "Looping..." << endl;

		if(i == 5) {
			break;
		}
		
	}

	return 0;

}
