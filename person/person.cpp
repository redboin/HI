#include <iostream>
#include <cstring>
using namespace std;

class Person
{
	char* name;
	char* phone;
	int age;
public:
	Person(char* _name, char* _phone, int _age);
	Person(const Person& ps);
	~Person();
	void ShowData();
};
Person::Person(char* _name, char* _phone, int _age)
{
	name = new char[strlen(_name) + 1];
	strcpy(name, _name);
	phone = new char[strlen(_phone) + 1];
	strcpy(phone, _phone);
	age = _age;
}
Person::Person(const Person& ps) {
	this->age = ps.age;
	name = new char[strlen(ps.name) + 1];
	strcpy(this->name, ps.name);
	phone = new char[strlen(ps.phone) + 1];
	strcpy(this->phone, ps.phone);
}

Person::~Person()
{
	delete []name;
	delete []phone;
}
void Person::ShowData() {
	cout << "Name: " << name << endl;
	cout << "Phone: " << phone << endl;
	cout << "age: " << age << endl;
}
int main() {
	Person p1("KIM", "013-333-5555", 22);
	Person p2(p1);
	p1.ShowData();
	return 0;
}