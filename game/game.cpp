#include <iostream>
#include<cstdlib>
#include<ctime>
#include <string>
#include <Windows.h>

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
	Game(int h, int a, int d, int e);
	void Stat(int eHp, int eAtk, int eDfs, int mEhp, string eName);
	void Damage(int dmg, string eName);
	int attack(int eDfs, string eName);
	bool live();
	void play(int *eHp, int eAtk, int eDfs, string eName);
};

Game::Game(int h = MAX_HP, int a = MAX_ATK, int d = MAX_DFS, int e = MAX_ENERGY)
{
	cout << "이름을 입력해 주세요: ";
	cin >> name;
	HP = h;
	atk = a;
	dfs = d;
	energy = e;
}
void Game::Stat(int eHp, int eAtk, int eDfs, int mEhp, string eName){
	cout << "이름: <" << name << '>' << endl;
	cout << "생명력: ";
	int i;
	int div= MAX_HP;
	while (div / 100) {
		div /= 10;
	}
	for (i = 0; i < HP / div; i++) {
		cout << "♥";
	}
	for (i; i < 10; i++) {
		cout << "♡";
	}
	cout << HP << '/' << MAX_HP << endl;
	cout << "에너지: ";
	div = MAX_ENERGY;
	while (div / 100) {
		div /= 10;
	}
	for (i = 0; i < energy / div; i++) {
		cout << "■";
	}
	for (i; i < div; i++) {
		cout << "□";
	}
	cout << energy << '/' << MAX_ENERGY << endl;

	cout << "공격력: " << atk << endl;
	cout << "방어력: " << dfs << endl << endl;
	cout << eName << "\n";
	cout << "생명력: ";
	div = mEhp;
	while (div / 10) {
		div /= 10;
	}
	for (i = 0; i < eHp / div; i++) {
		cout << "♥";
	}
	for (i; i < 10; i++) {
		cout << "♡";
	}
	cout << eHp << '/' << mEhp << endl;
	cout << "공격력: " << eAtk << endl;
	cout << "방어력: " << eDfs << endl << endl;
	cout << "--------------------\n";
}
void Game::Damage(int dmg, string eName) {
	int hit = dmg - dfs;
	if (hit < 0) hit = 0;
	HP -= hit;
	cout << "-" <<eName << "의 공격으로 HP가 " << hit << "만큼 감소하였습니다.-\n";
}
int Game::attack(int eDfs, string eName) {
	int att = atk - eDfs;
	if (att < 0) att = 0;
	cout << "\n-" << eName << "에게 " << att << "만큼의 피해를 입혔습니다.-\n";
	return att;
}

bool Game::live() {
	return HP > 0;
}

void Game::play(int* eHp, int eAtk, int eDfs, string eName){
	cout << "<" << name << ">\n";
	cout << "[1] <공격> 에너지 소모: " << MAX_ENERGY / 5 << endl;
	cout << "[2] <막기> 에너지 소모: " << MAX_ENERGY / 10 << endl;
	cout << "[3] <쉬기> 에너지 "<< MAX_ENERGY / 5 << "회복\n";
	cout << "[4] <포기>\n";
	int input;
	int engre = MAX_ENERGY / 10;
	while (1) {
		cout << "선택해 주세요: ";
		cin >> input;
		switch (input)
		{
		case 1:
			if (energy < MAX_ENERGY / 5) {
				cout << "에너지가 부족합니다!\n";
				break;
			}
			else {
				*eHp -= attack(eDfs, eName);
				if (eHp <= 0) return;
				Damage(eAtk, eName);
				energy -= MAX_ENERGY / 5;
				return;
			}
			break;
		case 2:
			if (energy < MAX_ENERGY / 10) {
				cout << "에너지가 부족합니다!\n";
				break;
			}
			else {
				cout << "적의 공격을 막았습니다.\n";
				energy -= MAX_ENERGY / 10;
				return;
			}
			break;
		case 3:
			Damage(eAtk, eName);
			engre *= 2;
			return;
		case 4:
			char yorn;
			cout << "포기하시겠 습니까?(y) ";
			do 
			{
				cin >> yorn;
			} while (yorn != 'y' && yorn != 'Y');
			if (yorn == 'y' || yorn == 'Y') {
				HP -= HP;
				return;
			}
		}
	}
}



int main()
{
	srand((unsigned int)time(NULL)); 
	string eName[10] = { "과제", "게임의 유혹", "졸음", "희찬", "시우", "원신", "민트초코", "솔로", "커플", "사감쌤" };
	Game p1(MAX_HP, MAX_ATK, MAX_DFS, MAX_ENERGY);
	int eN = rand() % 10;
	string ee(eName[eN]);
	int eHp = rand() % MAX_HP / 2 + 50;
	int eAtk = rand() % MAX_ATK / 2 + MAX_ATK;
	int eDfs = rand() % MAX_DFS / 2 + MAX_DFS / 2;
	int mEhp = eHp;
	cout << "앗 야생의 " << ee << "(이)가 나타났다!\n";
	cout << "press ant key";
	getchar();
	getchar();
	system("cls");
	while (p1.live() && eHp > 0) {
		p1.Stat(eHp, eAtk, eDfs, mEhp, ee);
		p1.play(&eHp, eAtk, eDfs, ee);
		cout << "press ant key";
		getchar();
		getchar();
		system("cls");
	}
	if (!p1.live()) cout << "사망하셨습니다!\n";
	else cout << "적을 물리치셨습니다!\n";
	return 0;
}