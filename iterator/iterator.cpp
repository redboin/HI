#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	int user_input;
	vector<int> v;
	for (int i = 0; i < 10; ++i)
		v.push_back(10 - i);

	cout << "���� ��" << endl;
	vector<int>::iterator iIter;
	for (iIter = v.begin(); iIter != v.end(); iIter++) {
		cout << *iIter << ", ";
	}
	cout << endl;
	sort(v.begin(), v.end());

	cout << "���� ��" << endl;
	for (iIter = v.begin(); iIter != v.end(); iIter++)
		cout << *iIter << ", ";
	cout << endl;

	cout << "ã�� ���� ? ";
	cin >> user_input;

	iIter = find(v.begin(), v.end(), user_input);
	if (iIter != v.end())
		cout << "�߰�" << endl;
	else
		cout << "�̹߰�" << endl;
}