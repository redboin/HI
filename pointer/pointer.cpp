#include <iostream>
using namespace std;

void f(int i)
{
	cout << "called f(int)" << endl;
}

void f(string* p)
{
	cout << "called f(string*)" << endl;
}
	
int main() {
	cout << __cplusplus;
	return 0;
}