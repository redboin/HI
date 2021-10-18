#pragma once

#include <iostream>
#include <string>
using namespace std;

class Person
{
	// public:
private:
	string name;
	string id; // �ֹ� ��ȣ :
	// 123456 1234567
	int age; // ����
	int gender; // ����
	int height; // Ű

public:
	Person();
	Person(const string& name, const string& id, int age, int gender, int height);
	~Person();
	string GetName();
	int GetAge();
	bool operator== (const Person& p); // for std::find(...)
	void ShowInfo();
};