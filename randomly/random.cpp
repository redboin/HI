#include <iostream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <vector>
using namespace std;

int main() {
	srand(time(NULL));

	vector<int> v;
	int count, num, max = -2000000, min = 2000000;

	cout << "������ ���� : ";
	cin >> count;
	for (int i = 0; i < count; ++i) {
		cout << "������ �Է��Ͻÿ� : ";
		cin >> num;
		v.push_back(num);
	}

	cout << "vector�� ũ�� : " << v.size() << endl;
	for (auto& element : v) {
		cout << element << endl;;
	}

	for (auto& e : v) {
		if (e < min) min = e;
		else if (e > max) max = e;
	}
	cout << "�ִ� : " << max << "\n�ּڰ� : " << min;
}