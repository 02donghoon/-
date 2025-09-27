#include <iostream>
#include <string>
using namespace std;

class Animal {
public:
	void eat() {
		cout << "¸Ô±â" << endl;
	}
	void walk() {
		cout << "°È±â" << endl;
	}
	void sleep() {
		cout << "ÀÚ±â" << endl;
	}
};

class Dog : public Animal {
public:
	Dog() {
		cout << "ÀÚ½Ä °´Ã¼ »ý¼º" << endl;
	}
};

int main() {
	Dog p1;
	p1.eat();
	p1.walk();
	p1.sleep();

	return 0;
}