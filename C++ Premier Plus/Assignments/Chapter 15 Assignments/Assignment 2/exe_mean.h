#pragma once
#include <iostream>
#include <stdexcept>
class bad_mean :public std::logic_error {
public:
	double v1;
	double v2;
public:
	bad_mean(double a, double b, const std::string& s = "Invaild arguments.")
		:v1(a), v2(b), logic_error(s) {}
	void msg() const { std::cout << "( " << v1 << ", " << v2 << " ) " << what() << std::endl; }
};
class bad_hmean:public bad_mean {
private:
	double v1;
	double v2;
public:
	bad_hmean(double a, double b,const std::string& s="hmean invalid arguments: a = -b.")
		:v1(a), v2(b), bad_mean(a,b,s) {}
};

class bad_gmean :public bad_mean {
public:
	double v1;
	double v2;
public:
	bad_gmean(double a, double b, const std::string& s = "gmean arguments should be >= 0")
		:v1(a), v2(b), bad_mean(a, b, s) {}
};
