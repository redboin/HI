#include <iostream>
#include <cstdlib>
#include <ctime>
#include <vector>
using namespace std;

class Circle
{
public:
	int x, y;
	int radius;

	Circle()
	{
		x = 0, y = 0, radius = 0;
	}
	Circle(int x, int y, int r)
	{
		this->x = x;
		this->y = y;
		this->radius = r;
	}
	void print()
	{
		cout << "¹ÝÁö¸§: " << radius << " @(" << x << ", " << y << ")" << endl;
	}
};

int main(void)
{
	srand(time(NULL));

	vector<Circle> v;
	for (int i = 0; i < 20; ++i) {
		Circle c;
		c.x = rand() % 500;
		c.y = rand() % 300;
		c.radius = rand() % 100;
		v.push_back(c);
	}
	const double pi = 3.1415;
	double N = 0;
	for (Circle& c : v) {
		N += pi * c.radius * c.radius;
	}
	N /= 20;
		
	cout << N;
}