#include <iostream>

using namespace std;

class Cat {
private:
	bool happy;
public:
	void makeHappy() {
		happy = true;
	}
	
	void makeSad() {
		happy = false;
	}
	
	void speak() {
		if (happy){
			cout << "Meouwww!!!" << endl;
		} else if (!happy) {
			cout << "Chhhhhh!!!" << endl;
		}
	}
	
	void jump() {
		if (happy) {
			cout << "Jumping to the bookcase" << endl;
		} else if (!happy) {
			cout << "Laying on the floor" << endl;
		}
	}
};

int main() {
	
	Cat martin; //cat is the class and martin is the object
	cout << "Martin:" << endl;
	martin.makeHappy();
	martin.speak();
	martin.jump();
	
	Cat jim;
	cout << "Jim:" << endl;
	jim.makeSad();
	jim.speak();
	jim.jump();

	return 0;
}
