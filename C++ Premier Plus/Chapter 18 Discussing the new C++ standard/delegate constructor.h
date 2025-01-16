#pragma once
#include <string>
class Notes {
	int k;
	double x;
	std::string st;
public:
	Notes();
	Notes(int);
	Notes(int, double);
	Notes(int, double, std::string);
};
Notes::Notes(int kk, double xx, std::string stst) :k(kk), x(xx), st(stst) {}
Notes::Notes() :Notes(0, 0.01, "Oh"){}
Notes::Notes(int kk) :Notes{ kk,0.01,"Ah" }{}
Notes::Notes(int kk, double xx) :Notes{ kk,xx,"Uh" } {}
