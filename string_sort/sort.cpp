#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool compare(string s1, string s2) {
	int i = 0;
	while (s1[i] != NULL && s2[i] != NULL)
	{
		if (s1[i] != s2[i]) return s1[i] < s2[i];
		i++;
	}
	return s1.size() < s2.size();
}

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
	sort(v.begin(), v.end(), compare);

	for (auto& e : v)
		cout << e << endl;
}