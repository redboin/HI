#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	int n;
	string str_input;
	vector<string> v;
	cout << "문자열의 개수 : ";
	cin >> n;

	for (int i = 0; i < n; ++i) {
		cout << "문자열을 입력하시오 : ";
		cin >> str_input;
		v.push_back(str_input);
	}
	sort(v.begin(), v.end());

	for (auto& e : v)
		cout << e << endl;
}