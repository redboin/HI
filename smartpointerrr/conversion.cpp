#include <iostream>
using namespace std;

int main() {
	int* a = new int(5);
	int* b = new int(3);
	cout << *a << " " << a << endl;
	cout << *b << " " << b << endl;
	*a = *b;
	cout << *a << " " << a << endl;
	cout << *b << " " << b << endl;
	*a = 5;
	cout << *a << " " << a << endl;
	cout << *b << " " << b << endl;
	delete a;
	/*delete b;*/
}