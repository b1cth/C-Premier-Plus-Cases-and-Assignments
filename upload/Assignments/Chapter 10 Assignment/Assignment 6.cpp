#include "header.h"
//Assignment 6 Functions

Move::Move(double a, double b) {
	x = a;
	y = b;
	cout << endl;
}
void Move::showmove()const {
	cout << "x: " << x << endl;
	cout << "y: " << y << endl;
}
Move Move::add(const Move& m) const {
	return Move(this->x + m.x, this->y + m.y);
}
void Move::reset(double a, double b) {
	x = a;
	y = b;
}