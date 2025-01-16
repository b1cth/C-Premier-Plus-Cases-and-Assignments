#pragma once
#include<string>
#include<iostream>
class Cpmv {
public:
	struct Info { 
		std::string qcode; 
		std::string zcode;
	};
private:
	Info* pi;
public:
	Cpmv();
	Cpmv(std::string q, std::string z);
	Cpmv(const Cpmv& cp);
	Cpmv(Cpmv&& mv);
	~Cpmv();
	Cpmv& operator=(const Cpmv& cp);
	Cpmv& operator=(Cpmv&& mv);
	Cpmv operator+(const Cpmv& obj) const;
	void Display() const;
};

inline Cpmv::Cpmv(){
	std::cout << "default constrcutor called.\n";
	pi = new Info;
	pi->qcode = "null";
	pi->zcode = "null";
	//std::cout << "Address: " << pi << std::endl << std::endl;
}
inline Cpmv::Cpmv(std::string q, std::string z) {
	std::cout << "string constrcutor called.\n";
	pi = new Info;
	pi->qcode = q;
	pi->zcode = z;
	//std::cout << "Address: " << pi << std::endl << std::endl;
}
inline Cpmv::Cpmv(const Cpmv& cp) {
	std::cout << "copy constrcutor called.\n";
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	//std::cout << "Address: " << pi << std::endl << std::endl;
}
inline Cpmv::Cpmv(Cpmv&& mv){
	std::cout << "move constrcutor called.\n";
	pi = mv.pi;
	mv.pi = nullptr;
	//std::cout << "Address: " << pi << std::endl << std::endl;
}
inline Cpmv::~Cpmv() {
	std::cout << "deconstrcutor called.\n";
	delete pi;
	std::cout << "Address: " << pi << std::endl << std::endl;
}
inline Cpmv& Cpmv::operator=(const Cpmv& cp) {
	std::cout << "operator = called.\n";
	if (this == &cp) {
		return *this;
	}
	delete pi;
	pi = new Info;
	pi->qcode = cp.pi->qcode;
	pi->zcode = cp.pi->zcode;
	//std::cout << "Address: " << pi << std::endl << std::endl;
	return *this;
}
inline Cpmv& Cpmv::operator=(Cpmv&& mv){
	std::cout << "move operator = called.\n";
	if (this == &mv) {
		return *this;
	}
	delete pi;
	pi = mv.pi;
	mv.pi = nullptr;
	//std::cout << "Address: " << pi << std::endl << std::endl;
	return *this;
}
inline Cpmv Cpmv::operator+(const Cpmv& obj) const {
	std::cout << "operator + called.\n";
	Cpmv temp;
	temp.pi->qcode = pi->qcode + obj.pi->qcode;
	temp.pi->zcode = pi->zcode + obj.pi->zcode;
	//std::cout << "Address: " << pi << std::endl << std::endl;
	return temp;
}
inline void Cpmv::Display() const {
	std::cout << "Display function called.\n";
	std::cout << "qcode: " << pi->qcode << ", zcode: " << pi->zcode << std::endl;
	std::cout << "Address: " << pi << std::endl << std::endl;
}