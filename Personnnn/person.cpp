#include <iostream>
#include <string>
#include "person.h"

Person::Person() : name(""), id(""), age(0), gender(0), height(0)
{
	cout << "Person 생성자1" << endl;
}
Person::Person(const string& name, const string& id, int age, int gender, int height)
{
	cout << "Person 생성자2" << endl;

	this->name = name;
	this->id = id;
	this->age = age;
	this->gender = gender;
	this->height = height;
}
Person::~Person()
{
	cout << "Person 소멸자" << endl;
}
void Person::ShowInfo()
{
	cout << "이름 : " << name << endl;
	cout << "주민번호 : " << id << endl;
	cout << "나이 : " << age << endl;
}
string Person::GetName()
{
	return name;
}
int Person::GetAge()
{
	return age;
}
bool Person::operator== (const Person& p) // for std::find(...)
{
	if (name == p.name &&
		id == p.id &&
		age == p.age &&
		gender == p.gender &&
		height == p.height)
	{
		return true;
	}

	return false;
}
