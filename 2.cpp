#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string name;
	int age;

public:
	Person() {    //자식의 기본 생성자 생성
		cout << "부모 클래스 생성자 생성" << endl;
	};
	Person(string n, int a) : name(n), age(a) {}

	void introduce() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};

// 자식 클래스 (파생 클래스)
class Student : public Person {
private:
	string major;

public:
	Student() {   //자식의 디폴트 생성자를 만드려면 부모의 디폴트 생성자도 존재해야한다.
				  //자식이 디폴트 생성자를 호출할 때 부모의 디폴트 생성자가 호출되기 때문.
		cout << "자식 클래스 생성자 생성" << endl;
	};
	Student(string n, int a, string m) : Person(n, a), major(m) {}  //Person의 생성자 호출

	void study() {
		cout << name << " 학생이 " << major << " 전공 공부 중입니다." << endl;
	}
};

int main() {
	Student p1;
	Student s("강동훈", 24, "게임공학과");  //부모 생성자 호출 함수를 없앴을 때, 객체가 생성되면 기본 생성자가 호출됨.
	s.introduce();   // 부모 클래스 함수 사용
	s.study();       // 자식 클래스 함수 사용
	return 0;
}