#pragma once
#include <iostream>
class bad_hmean {
private:
	double v1;
	double v2;
public:
	bad_hmean(double a,double b):v1(a),v2(b){}
	void mesg() const;
};

class bad_gmean {
public:
	double v1;
	double v2;
public:
	bad_gmean(double a, double b) :v1(a), v2(b) {}
	const char* mesg() const;
};

inline void bad_hmean::mesg() const {
	std::cout << "hmean( " << v1 << ", " << v2 << " ) invalid arguments: a = -b.\n";
}

inline const char* bad_gmean::mesg() const {
	return "arguments should be >= 0\n";
}