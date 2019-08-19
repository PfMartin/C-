#include <iostream>
#include <iomanip>
using namespace std;

int main() {

	float value1 = 1.1;

	cout << setprecision(10) << value1 << endl;

	if(value1 == 1.1) {
		cout << "equal" << endl;
	}
	else {
		cout << "not equal" << endl;
	}

	if (value1 < 1.11) {
		cout << "equal" << endl;
	}

	return 0;
}
