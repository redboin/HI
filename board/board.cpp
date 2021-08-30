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
	cout << "********** 게시판입니다 **********\n";	
	for (int i = 0; i < index; i++) {
		cout << i << ": " << s[i] << endl;
	}
	cout << endl;
}
int main() {
	Board::add("중간고사는 감독 없는 자율 시험입니다.");
	Board::add("코딩 라운지 많이 이용해 주세요.");
	Board::print();
	Board::add("진소린 학생이 경진대회 입상하였습니다. 축하해주세요");
	Board::print();
}