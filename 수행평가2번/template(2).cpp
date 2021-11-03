#include <iostream>
using namespace std;

template <typename T>
T sub(T a, T b)
{
	return a - b;
}

int main() {
	int a = 300, b = 40;
	double d1 = 8.2;
	double d2 = 0.5;

	cout << "int »¬¼À:" << sub<int>(a, b) << endl;
	cout << "double »¬¼À:" << sub<double>(d1, d2) << endl;

	return 0;
}