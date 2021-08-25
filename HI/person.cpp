#include <iostream>
using namespace std;

class Person {
private:
public:
	int money;
	static int sharedMoney;
	void addMoney(int money);
	void addShared(int money);
};

int Person::sharedMoney = 0;
void Person::addMoney(int money) {
	this->money += money;
}
void Person::addShared(int money) {
	sharedMoney += money;
}

int main() {
	Person han;
	han.money = 100;
	han.sharedMoney = 200;

	Person lee;
	lee.money = 150;
	lee.addMoney(200);
	lee.addShared(200);

	cout << han.money << " " << lee.money << endl;
	cout << han.sharedMoney << " " << lee.sharedMoney;
}