#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int user_input;
	vector<int> v;
	for (int i = 0; i < 10; ++i)
		v.push_back(10 - i);

	cout << "정렬 전" << endl;
	vector<int>::iterator iIter;
	for (iIter = v.begin(); iIter != v.end(); iIter++) {
		cout << *iIter << ", ";
	}
	cout << endl;
	sort(v.begin(), v.end());

	cout << "정렬 후" << endl;
	for (iIter = v.begin(); iIter != v.end(); iIter++)
		cout << *iIter << ", ";
	cout << endl;

	cout << "찾을 값은 ? ";
	cin >> user_input;

	iIter = find(v.begin(), v.end(), user_input);
	if (iIter != v.end())
		cout << "발견" << endl;
	else
		cout << "미발견" << endl;
}