#include <iostream>
using namespace std;

template <typename T>
T sum(T a, T b)
{
	return a + b;
}

int main() {
	int a = 10, b = 20;
	double d1 = 3.2, d2 = 5.5;
	string s1 = "Korea Animation", s2 = "High School";

	cout << "int гу: " << sum<int>(a, b) << endl;
	cout << "double гу: " << sum<double>(d1, d2) << endl;
	cout << "string гу: " << sum<string>(s1, s2) << endl;
}