#include "13.1 tabtenn0.h"
void show(const TableTennisPlayer& rt);
int main() {
	using std::cout;;
	TableTennisPlayer player1("Tara", "Boomdea", false);
	RatedPlayer rplayer1("Mallory", "Duck", true, 1140);
	show(player1);
	show(rplayer1);//TableTennisPlayer&可以指向派生类
	rplayer1.name();//继承基类方法
	if (rplayer1.hastable()) {
		cout << ": has a table\n";
	}
	else {
		cout << ": hasn't a table\n";
	}
	player1.name();
	if (player1.hastable()) {
		cout << ": has a table\n";
	}
	else {
		cout << ": hasn't a table\n";
	}

	cout << "Name: ";
	rplayer1.name();
	cout << "; Rating: " << rplayer1.Rating() << endl;

	RatedPlayer rplayer2(player1, 1212);
	cout << "Name: ";
	rplayer2.name();
	cout << "; Rating: " << rplayer2.Rating() << endl;
	return 0;
}

void show(const TableTennisPlayer& rt) {
	using std::cout;
	cout << "Name: ";
	rt.name();
	cout << "\nTable: ";
	if (rt.hastable()) {
		cout << "yes\n";
	}
	else {
		cout << "no\n";
	}
}