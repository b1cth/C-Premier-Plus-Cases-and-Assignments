#include "Portmaster.h"
Port::Port(const char* br, const char* st, int b) {
	int len = strlen(br) + 1;
	brand = new char[len];
	strcpy_s(brand, len, br);
	strcpy_s(style, 20, st);
	bottles = b;
}
Port::Port(const Port& p) {
	int len = strlen(p.brand) + 1;
	brand = new char[len];
	strcpy_s(brand, len, p.brand);
	strcpy_s(style, 20, p.style);
	bottles = p.bottles;
}
Port::~Port() {
	delete[] brand;
}
Port& Port::operator=(const Port& p) {
	if (this == &p) {
		return *this;
	}
	delete[] brand;
	int len = strlen(p.brand) + 1;
	brand = new char[len];
	strcpy_s(brand, len, p.brand);
	strcpy_s(style, 20, p.style);
	bottles = p.bottles;
}
Port& Port::operator+=(int b) {
	bottles += b;
	return *this;
}
Port& Port::operator-=(int b) {
	bottles -= b;
	return *this;
}
void Port::Show() const {
	using std::cout, std::endl;
	cout << "Brand: " << brand << endl;
	cout << "Kind: " << style << endl;
	cout << "Bottles: " << bottles << endl;
}
std::ostream& operator<<(std::ostream& os, const Port& p) {
	os << p.brand << ", " << p.style << ", " << p.bottles << std::endl;
	return os;
}


VintagePort::VintagePort() :Port(),nickname(nullptr),year(0){}
VintagePort::VintagePort(const char* br, int b, const char* nn, int y) :Port(br, "none", b) {
	int len = strlen(nn) + 1;
	nickname = new char[len];
	strcpy_s(nickname, len, nn);
	year = y;
}
VintagePort::VintagePort(const VintagePort& vp) :Port(vp) {
	int len = strlen(vp.nickname) + 1;
	nickname = new char[len];
	strcpy_s(nickname, len, vp.nickname);
	year = vp.year;
}
VintagePort& VintagePort::operator=(const VintagePort& vp) {
	if (this == &vp) {
		return *this;
	}
	delete[] nickname;
	Port::operator=(vp);
	int len = strlen(vp.nickname) + 1;
	nickname = new char[len];
	strcpy_s(nickname, len, vp.nickname);
	year = vp.year;
	return *this;
}
void VintagePort::Show() const {
	using std::cout, std::endl;
	Port::Show();
	cout << "Nickname: " << nickname << endl;
	cout << "Year: " << year << endl;
}
std::ostream& operator<<(std::ostream& os, const VintagePort& vp) {
	using std::cout, std::endl;
	os << (const Port&)vp;
	cout << "Nickname: " << vp.nickname << endl;
	cout << "Year: " << vp.year << endl;
	return os;
}