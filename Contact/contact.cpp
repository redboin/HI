#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Contact
{
private:
	string name;
	string number;
	string adress;
public:
	Contact(string name, string number, string adress) {
		this->name = name;
		this->number = number;
		this->adress = adress;
	}
	string getname() { return name; }
	void print() { cout << "��ȭ��ȣ : " << number << endl; }
};

int main() {
	int iChoose;
	string name, number, adress;

	vector<Contact> v;
	
	do 
	{
		cout << "�߰� (1) / Ž��(2) : ";
		cin >> iChoose;
		if (iChoose == 1)
		{
			getchar();
			cout << "�̸��� �Է��Ͻÿ� : ";
			getline(cin, name);
			cout << "��ȭ��ȣ�� �Է��Ͻÿ� : ";
			getline(cin, number);
			cout << "�ּҸ� �Է��Ͻÿ� : ";
			getline(cin, adress);
			Contact c(name, number, adress);
			v.push_back(c);

		}
		else if (iChoose == 2) {
			if (v.size() == 0)
				cout << "��ȭ��ȣ�ΰ� ����ֽ��ϴ�.\n";
			else {
				cout << "Ž���ϰ� ���� �̸��� �Է��Ͻÿ� : ";
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