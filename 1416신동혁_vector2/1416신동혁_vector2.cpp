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
	cout << "제목: " << title << endl << "평점: " << score << endl << endl;;
}

int main() {
	string title;
	int score;
	int iA;
	vector<Movie> v;

	cout << "영화 몇개? ";
	cin >> iA;

	for (int i = 0; i < iA; ++i) {
		cout << endl;
		cout << "제목: ";
		cin >> title;
		cout << "평점: ";
		cin >> score;
		Movie m(title, score);
		v.push_back(m);
	}

	cout << endl;

	for (int i = 0; i < iA; ++i) {
		v.at(i).print();
	}
}