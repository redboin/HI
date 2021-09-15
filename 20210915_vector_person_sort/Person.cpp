#include "Person.h"

bool compare(Person &p1, Person &p2) {
	return p1.getAge() < p2.getAge();
}

int main()
{
	vector<Person> list;

	list.push_back(Person("강감찬", "1234561234567", 75, 1, 160));
	list.push_back(Person("이순신", "1234561234568", 65, 1, 170));
	list.push_back(Person("홍길동", "1234561234569", 55, 1, 180));



	for (int i = 0; i < list.size(); ++i) {
		list[i].showInfo();
	}

	cout << "\n0\n\n";

	sort(list.begin(), list.end(), compare);
	for (int i = 0; i < list.size(); ++i) {
		list[i].showInfo();
	}
}