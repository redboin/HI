#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
#include <algorithm>
using namespace std;

class Circle
{
private:
	int x, y;
	int radius;

public:
	Circle() : x(0), y(0), radius(0){}
	Circle(int _x, int _y, int _r) : x{ _x }, y{ _y }, radius{ _r }{}
	int get_radius() { return radius; }
	void print()
	{
		cout << "반지름: " << radius << " @(" << x << ", " << y << ")" << endl;
	}
};

bool compare(Circle &c1, Circle &c2) {
	return c1.get_radius() > c2.get_radius();
}

int main(void)
{ 
	srand(time(NULL));   

	double N;
	int x, y, radius;

	vector<Circle> objarray;
	for (int i = 0; i < 20; ++i) {
		Circle c(rand() % 500, rand() % 300, rand() % 100);
		objarray.push_back(c);
	}

	for (Circle& c : objarray) {
		c.print();
	}
	cout << endl;
	sort(objarray.begin(), objarray.end(), compare);

	for (Circle& c : objarray) {
		c.print();
	}
}
//#include <iostream>
//#include <algorithm>
//#include <vector>
//#include <cstdlib>
//#include <ctime>
//using namespace std;
//
//class Circle
//{
//private:
//	int x, y, radius;
//public:
//	Circle(): x(0), y(0), radius(0){}
//	Circle(int _x, int _y, int _r) : x(_x), y(_y), radius(_r) {}
//
//	int get_radius() { return radius; }
//	void print() {
//		cout << "좌표: (" << x << ", " << y << ") 반지름: " << radius << endl;
//	}
//};
//
//bool compare(Circle c1, Circle c2) {
//	return c1.get_radius() > c2.get_radius();
//}
//
//int main() {
//	srand(time(NULL));
//
//	vector<Circle> v;
//	for (int i = 0; i < 20; i++) {
//		int x = rand() % 500;
//		int y = rand() % 300;
//		int radius = rand() % 100;
//		Circle c(x, y, radius);
//		v.push_back(c);
//	}
//
//	sort(v.begin(), v.end(), compare);
//
//	for (Circle& c : v)
//		c.print();
//
//	return 0;
//}