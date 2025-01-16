#include "complex0.h"


complex::~complex() {

}
complex complex::operator+(complex cp) const {
	return complex(real_number + cp.real_number, imaginary_number + cp.imaginary_number);
}
complex complex::operator-(complex cp) const {
	return complex(real_number - cp.real_number, imaginary_number - cp.imaginary_number);
}
complex complex::operator*(complex cp) const {
	return complex(real_number * cp.real_number, imaginary_number * cp.imaginary_number);
}
complex operator*(double a, complex cp) {
	return complex(a * cp.real_number, a * cp.imaginary_number);
}
std::istream& operator>>(std::istream& is, complex& cp) {
	is >> cp.real_number >> cp.imaginary_number;
	return is;
}
std::ostream& operator<<(std::ostream& os, const complex& cp) {
	os << "(" << cp.real_number << ", " << cp.imaginary_number << "i)\n";
	return os;
}
complex complex::operator~() const {
	return complex(real_number, -imaginary_number);
}