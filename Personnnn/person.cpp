#include <iostream>
#include <string>
#include "person.h"

Person::Person() : name(""), id(""), age(0), gender(0), height(0)
{
	cout << "Person ������1" << endl;
}
Person::Person(const string& name, const string& id, int age, int gender, int height)
{
	cout << "Person ������2" << endl;

	this->name = name;
	this->id = id;
	this->age = age;
	this->gender = gender;
	this->height = height;
}
Person::~Person()
{
	cout << "Person �Ҹ���" << endl;
}
void Person::ShowInfo()
{
	cout << "�̸� : " << name << endl;
	cout << "�ֹι�ȣ : " << id << endl;
	cout << "���� : " << age << endl;
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
