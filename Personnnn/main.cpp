#include <iostream>
#include <algorithm>
#include<vector>
#include "person.h"

bool compare(Person& p, Person& q)
{
	return p.GetAge() < q.GetAge();
}

int main(void)
{
	vector<Person> list;

	list.push_back(Person("강감찬", "1234561234567", 45, 1, 160));
	list.push_back(Person("이순신", "1234561234567", 55, 1, 170));
	list.push_back(Person("홍길동", "1234561234567", 65, 1, 180));
	cout << "정렬 전" << endl;
	for (int i = 0; i < list.size(); i++)
		list[i].ShowInfo();

	sort(list.begin(), list.end(), compare);


	cout << "정렬 후" << endl;
	for (auto& p : list)
		p.ShowInfo();

	list.clear();

	return 0;
}