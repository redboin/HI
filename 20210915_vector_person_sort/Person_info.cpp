#include "Person.h"

Person::Person() : name(""), id(""), age(0), gender(0), height(0){}
Person::Person(const string& name, const string& id, unsigned char age,
	unsigned char gender, unsigned char height)
{
	this->name = name;
	this->id = id;
	this->age = age;
	this->gender = gender;
	this->height = height;
}

void Person::showInfo() {
	cout << "�̸� : " << name << ", �ֹι�ȣ : " << id << ", ���� : " << age << endl;
}
string Person::getName() { return name; }
int Person::getAge() { return age; }