#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;
#define MAX_HP 100
#define MAX_ATK 20
#define MAX_DFS 10
#define MAX_ENERGY 100

class Game {
private:
	string name;
	int atk;
	int dfs;
	int HP;
	int energy;

public:
	Game();
	void Damage(int dmg);
	int attack(int eDfs);
	bool live();
	void play(int eHp, int eAtk, int eDfs);
};
void Game::Damage(int dmg) {
	int hit = dmg - dfs;
	if (hit < 0) hit = 0;
	cout << "���� �������� HP�� " << hit << "��ŭ �����Ͽ����ϴ�.\n";
}
int Game::attack(int eDfs, int o = 1) {
	int att = atk * o - eDfs;
	if (att < 0) att = 0;
	return att;
}

bool Game::live() {
	return HP > 0;
}

void Game::play(int* eHp, int eAtk, int eDfs){
	cout << "<" << name << ">\n";
	cout << "[1] �⺻ ����\n������ �Ҹ�: 0\n";
	cout << "[2] �ƹ� ����\n������ �Ҹ�: " << MAX_ENERGY / 10 << endl << endl;
	cout << "[3] ���� ����\n������ �Ҹ�: " << MAX_ENERGY / 30 << endl << endl;
	cout << "[4] ��û ���� ����\n������ �Ҹ�: " << MAX_ENERGY / 50 << endl << endl;
	cout << "[5]��Ƽ��\n ���� ������ ȸ��:" << MAX_ENERGY / 5 << endl << endl;
	int input;
	cout << "������ �ּ���: ";
	cin >> input;
	switch (input) {
	case 1:
		cout << "�⺻����\n������ " << attack(eDfs, 2) << "��ŭ ���ظ� �������ϴ�.\n";
		break;
	case 2:
		cout << "�ƹ� ����\n������ " << attack(eDfs, 3) << "��ŭ ���ظ� �������ϴ�.\n";
		break;
	case 3:
		cout << "�⺻����\n������ " << attack(eDfs, 5) << "��ŭ ���ظ� �������ϴ�.\n";
		break;
	case 4:
		cout << "�⺻����\n������ " << attack() << "��ŭ ���ظ� �������ϴ�.\n";
		break;
	case 5:
		cout << "�⺻����\n������ " << attack() << "��ŭ ���ظ� �������ϴ�.\n";
		break;
	}
}

//GameŬ���� ��� �Լ��� ����
Game::Game(int h, int a, int d)
{
	cout << "�̸��� �Է��� �ּ���: ";
	cin >> name;
	HP = MAX_HP;
	atk = MAX_ATK;
	dfs = MAX_DFS;
	cout << name << "\n�����: " << HP << "\n���ݷ�: " << atk << "\n����: " << dfs << "\n������: " << energy << "\n";
	
}

int main()
{
	srand((unsigned int)time(NULL)); 
	Game p1();
	int eHp = rand() % MAX_HP / 2 + 50;
	int eAtk = rand() % MAX_ATK / 2 + MAX_ATK / 2;
	int eDfs = rand() % MAX_DFS / 2 + MAX_DFS / 2;
	while (p1.live() || eHp > 0) {
		p1.play(&eHp, eAtk, eDfs);
	}
	return 0;
}