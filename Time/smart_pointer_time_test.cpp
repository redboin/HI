#include "Time.h"
using namespace std;

int main() {
	unique_ptr<Time> t1(new Time(23, 59));
	t1->Print();
	unique_ptr<Time> t2(new Time(8, 8));
	t2->Print();
	unique_ptr<Time> t3 = make_unique<Time>(13, 45);
	t3->Print();

	auto t4 = move(t3);
	Time* pT = t4.get();
	pT->Print();

	return 0;
}