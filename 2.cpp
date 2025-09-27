#include <iostream>
#include <string>
using namespace std;

class Person {
protected:
	string name;
	int age;

public:
	Person(); //부모 클래스의 디폴트 생성자 생성
	Person(string n, int a) : name(n), age(a) {}

	void introduce() {
		cout << "이름: " << name << ", 나이: " << age << endl;
	}
};

// 자식 클래스: 축구선수
class Football: public Person {
private:
	string position;
	int goals;

public:
	Football() {  //자식 클래스의 디폴트 생성자 
		            //자식의 디폴트 생성자를 만드려면 부모의 디폴트 생성자도 존재해야한다.
				        //자식이 디폴트 생성자를 호출할 때 부모의 디폴트 생성자가 호출되기 때문.
		position = "미정";
		goals = 0;
	}

	// 부모 생성자를 호출하는 생성자
	Football(string n, int a, string pos, int g)
		: Person(n, a), position(pos), goals(g) {
	}

	void play() {
		cout << name << " 선수 // 포지션 : " << position << " // 골 수: " << goals << endl;
	}
};
// 자식 클래스: 교수
class Professor : public Person {
private:
	string major;
	string office;

public:
	Professor() {  //자식 클래스의 디폴트 생성자 
		major = "미정";
		office = "배정 전";
	}

	// 부모 생성자를 호출하는 생성자
	Professor(string n, int a, string m, string o)
		: Person(n, a), major(m), office(o) {
	}

	void teach() {
		cout << name << " 교수 // 전공: " << major
			<< " // 강의실: " << office << endl;
	}
};

int main() {

	Football p2("손흥민", 32, "LW,ST", 150);
	p2.introduce();  //부모 클래스 함수 사용
	p2.play();       //자식 클래스 함수 사용

	Professor prof("김철수", 50, "게임공학", "산학협력관 618호");
	prof.introduce();//부모 클래스 함수 사용
	prof.teach();    //자식 클래스 함수 사용

	return 0;
}

