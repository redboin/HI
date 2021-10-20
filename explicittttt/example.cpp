#include <iostream>
using namespace std;

class Foo
{
public:
	int m_foo;
	explicit Foo (int foo) : m_foo (foo) {}
};
void print_foo(Foo foo)
{
	cout << foo.m_foo << endl;
}

int main() 
{
	int num = 43;
	print_foo(Foo(num));
	
}