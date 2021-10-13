#include <iostream>
#include <memory>
using namespace std;

class Test {
public:
	Test(int x): x(x) {
		cout << "������" << endl;
	}
	~Test() {
		cout << "�Ҹ���" << endl;
	}
	int GetX() const { return x; }
private:
	int x;
};

int main() {
	cout << "���ν���" << endl;
	
	unique_ptr<Test> p(new Test(5));
	cout << p->GetX() << endl;
	p.reset(new Test(6));
	cout << p->GetX() << endl;
	cout << "��������" << endl;
}