#include <iostream>
#include <string>
using namespace std;

#define MAX_STRING 10


class Board {
public:
	static string s[MAX_STRING];
	static int index;
	static void add(const char* u);
	static void print();
};
string Board::s[] = { "", };
int Board::index = 0;
void Board::add(const char* u) {
	
	string ss(u);
	s[index] = ss;
	index++;
}
void Board::print() {
	cout << "********** �Խ����Դϴ� **********\n";	
	for (int i = 0; i < index; i++) {
		cout << i << ": " << s[i] << endl;
	}
	cout << endl;
}
int main() {
	Board::add("�߰����� ���� ���� ���� �����Դϴ�.");
	Board::add("�ڵ� ����� ���� �̿��� �ּ���.");
	Board::print();
	Board::add("���Ҹ� �л��� ������ȸ �Ի��Ͽ����ϴ�. �������ּ���");
	Board::print();
}