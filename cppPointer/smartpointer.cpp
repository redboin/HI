#include <iostream>
#include <memory>
using namespace std;

class Test {
public:
	Test(int x): x(x) {
		cout << "생성자" << endl;
	}
	~Test() {
		cout << "소멸자" << endl;
	}
	int GetX() const { return x; }
private:
	int x;
};

int main() {
	cout << "메인시작" << endl;
	
	unique_ptr<Test> p(new Test(5));
	cout << p->GetX() << endl;
	p.reset(new Test(6));
	cout << p->GetX() << endl;
	cout << "메인종료" << endl;
}