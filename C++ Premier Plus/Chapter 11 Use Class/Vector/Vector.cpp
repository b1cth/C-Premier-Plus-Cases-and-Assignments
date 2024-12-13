#include "vector.h"
using std::sqrt;
using std::sin;
using std::tan;
using std::atan;
using std::atan2;
using std::cout;
namespace VECTOR {
	const double Rad_to_deg = 45.0 / atan(1.0);
	void Vector::set_mag() {
		mag = sqrt(x * x + y * y);
	}
	void Vector::set_ang() {
		if (x == 0 && y == 0) {
			ang = 0;
		}
		else {
			ang = atan2(y, x);
		}
	}
	//set x from polar coordinate
	void Vector::set_x() {
		x = mag * cos(ang);
	}
	void Vector::set_y() {
		y = mag * sin(ang);
	}
	//constructor
	Vector::Vector() {
		x = y = mag = ang = 0;
		mode = RECT;
	}
	Vector::Vector(double n1, double n2, Mode form) {
		if (form == RECT) {
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL) {
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else {
			cout << "Incorrect 3rd argument to Vector()-- ";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0;
			mode = RECT;
		}
	}
	void Vector::reset(double n1, double n2, Mode form) {
		if (form == RECT) {
			x = n1;
			y = n2;
			set_mag();
			set_ang();
		}
		else if (form == POL) {
			mag = n1;
			ang = n2;
			set_x();
			set_y();
		}
		else {
			cout << "Incorrect 3rd argument to Vector()-- ";
			cout << "vector set to 0\n";
			x = y = mag = ang = 0;
			mode = RECT;
		}
	}
	void Vector::polar_mode() {
		mode = POL;
	}
	void Vector::rect_mode() {
		mode = RECT;
	}
	//operator
	Vector Vector::operator+(const Vector& b)const {
		return Vector(x + b.x, y + b.y);
	}
	Vector Vector::operator-(const Vector& b)const {
		return Vector(x - b.x, y - b.y);
	}
	Vector Vector::operator-()const {
		return Vector(-x, -y);
	}
	Vector Vector::operator*(double n)const {
		return Vector(x * n, y * n);
	}
	//friends
	Vector operator*(double n, const Vector& b) {
		return Vector(b.x * n, b.y * n);
	}
	std::ostream& operator<<(std::ostream& os, const Vector& b) {
		if (b.mode == Vector::RECT) {
			os << "(x,y)= (" << b.x << ", " << b.y << ")\n";
		}
		else if (b.mode == Vector::POL) {
			os << "(m,a)= (" << b.mag << ", " << b.ang << ")\n";
		}
		else {
			os << "Vector object mode is invalid";
		}
		return os;
	}
}

