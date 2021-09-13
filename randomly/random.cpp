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

	cout << "정수의 개수 : ";
	cin >> count;
	for (int i = 0; i < count; ++i) {
		cout << "정수를 입력하시오 : ";
		cin >> num;
		v.push_back(num);
	}

	cout << "vector의 크기 : " << v.size() << endl;
	for (auto& element : v) {
		cout << element << endl;;
	}

	for (auto& e : v) {
		if (e < min) min = e;
		else if (e > max) max = e;
	}
	cout << "최댓값 : " << max << "\n최솟값 : " << min;
}