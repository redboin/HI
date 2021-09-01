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
	cout << "적의 공격으로 HP가 " << hit << "만큼 감소하였습니다.\n";
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
	cout << "[1] 기본 공격\n에너지 소모: 0\n";
	cout << "[2] 아무 공격\n에너지 소모: " << MAX_ENERGY / 10 << endl << endl;
	cout << "[3] 아픈 공격\n에너지 소모: " << MAX_ENERGY / 30 << endl << endl;
	cout << "[4] 엄청 아픈 공격\n에너지 소모: " << MAX_ENERGY / 50 << endl << endl;
	cout << "[5]버티기\n 다음 에너지 회복:" << MAX_ENERGY / 5 << endl << endl;
	int input;
	cout << "선택해 주세요: ";
	cin >> input;
	switch (input) {
	case 1:
		cout << "기본공격\n적에게 " << attack(eDfs, 2) << "만큼 피해를 입혔습니다.\n";
		break;
	case 2:
		cout << "아무 공격\n적에게 " << attack(eDfs, 3) << "만큼 피해를 입혔습니다.\n";
		break;
	case 3:
		cout << "기본공격\n적에게 " << attack(eDfs, 5) << "만큼 피해를 입혔습니다.\n";
		break;
	case 4:
		cout << "기본공격\n적에게 " << attack() << "만큼 피해를 입혔습니다.\n";
		break;
	case 5:
		cout << "기본공격\n적에게 " << attack() << "만큼 피해를 입혔습니다.\n";
		break;
	}
}

//Game클래스 멤버 함수의 정의
Game::Game(int h, int a, int d)
{
	cout << "이름을 입력해 주세요: ";
	cin >> name;
	HP = MAX_HP;
	atk = MAX_ATK;
	dfs = MAX_DFS;
	cout << name << "\n생명력: " << HP << "\n공격력: " << atk << "\n방어력: " << dfs << "\n에너지: " << energy << "\n";
	
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