#include <iostream>
#include <vector>
using namespace std;

class Movie
{
private:
	string title;
	int score;
public:
	Movie(string title, int score);
	~Movie(){}
	void print();
};

Movie::Movie(string title, int score)
{
	this->title = title;
	this->score = score;
}

void Movie::print()
{
	cout << "����: " << title << endl << "����: " << score << endl << endl;;
}

int main() {
	string title;
	int score;
	int iA;
	vector<Movie> v;

	cout << "��ȭ �? ";
	cin >> iA;

	for (int i = 0; i < iA; ++i) {
		cout << endl;
		cout << "����: ";
		cin >> title;
		cout << "����: ";
		cin >> score;
		Movie m(title, score);
		v.push_back(m);
	}

	cout << endl;

	for (int i = 0; i < iA; ++i) {
		v.at(i).print();
	}
}