#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string str_input;
	vector<string> v;
	cout << "���ڿ��� ���� : ";
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cout << "���ڿ��� �Է��Ͻÿ� : ";
		cin >> str_input;
		v.push_back(str_input);
	}
	sort(v.begin(), v.end());

	for (auto& e : v)
		cout << e << endl;
}