#include <iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v;
	int input(1), sum(0);

	cin >> input;
	while(input != -1)
	{
		v.push_back(input);

		cin >> input;
	}
	for (auto i : v) {
		sum += i;
	}
	cout << sum / v.size();	
}