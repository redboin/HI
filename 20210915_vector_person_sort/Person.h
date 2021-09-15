#pragma once

#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Person
{
private:
	string name;
	string id;
	int age;
	int gender;
	int height;
public:
	Person();
	Person(const string& name, const string& id, unsigned char age,
		unsigned char gender, unsigned char height);
	~Person() {}
	string getName();
	int getAge();
	void showInfo();
};