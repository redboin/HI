#pragma once
#include <iostream>
#include <memory>
using namespace std;
class Time {
private:
	int hour;
	int minute;
public:
	Time() : hour(0), minute{ 0 } {
		cout << "called Time()" << endl;
	}
	Time(int h, int m) {
		cout << "called Time(int h, int m)" << endl;
		hour = h;
		minute = m;
	}
	~Time() {
		cout << "called ~Time()" << endl;
	}
	void Print() {
		cout << hour << ":" << minute << endl;
	}
	Time* adress() {
		return this;
	}
};