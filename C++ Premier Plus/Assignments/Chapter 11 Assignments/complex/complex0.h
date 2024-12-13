#pragma once
#include <iostream>
using namespace std;
class complex {
private:
	int real_number;
	int imaginary_number;
public:
	complex(double a=0, double b=0) :real_number(a), imaginary_number(b) {}
	~complex();
	complex operator+(complex cp) const;
	complex operator-(complex cp) const;
	complex operator*(complex cp) const;
	complex operator~() const;
	friend std::istream& operator>>(std::istream& is, complex& cp);
	friend std::ostream& operator<<(std::ostream& os, const complex& cp);
	friend complex operator*(double a,complex cp);
};