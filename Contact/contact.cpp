#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Contact
{
private:
	string name;
	string number;
	string address;
public:
	Contact(string _name, string _number, string _address) : name{ _name }, number{ _number }, address{ _address } {	}
	string getname() { return name; }
	void print() { cout << "전화번호 : " << number << endl; }
};

int main() {
	int iChoose;
	string name, number, address;

	vector<Contact> v;
	
	do 
	{
		cout << "종료 (0) / 추가 (1) / 탐색(2) : ";
		cin >> iChoose;
		if (iChoose == 1)
		{
			getchar();
			cout << "이름을 입력하시오 : ";
			getline(cin, name);
			cout << "전화번호를 입력하시오 : ";
			getline(cin, number);
			cout << "주소를 입력하시오 : ";
			getline(cin, address);
			Contact c(name, number, address);
			v.push_back(c);

		}
		else if (iChoose == 2) {
			if (v.size() == 0)
				cout << "전화번호부가 비어있습니다.\n";
			else {
				cout << "탐색하고 싶은 이름을 입력하시오 : ";
				cin >> name;
				for (auto& e : v) {
					if (e.getname() == name) {
						e.print();
					}
				}
			}
		}
		cout << endl;
	} while (iChoose);
}