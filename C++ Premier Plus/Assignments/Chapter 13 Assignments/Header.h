#pragma once
#include <cstring>
#include <iostream>
class Cd {
private:
	char performers[50];
	char label[20];
	int selections;
	double playtime;
public:
	Cd(const char* s1 = "none", const char* s2 = "none", int n = 0, double x = 0);
	Cd(const Cd& d);
	virtual ~Cd(){}
	virtual void report() const;
	Cd& operator=(const Cd& d);
};

class Classic : public Cd {
private:
	char* mainworks;
public:
	Classic(const char* m = "none", const char* s1 = "none", const char* s2 = "none", int n = 0, double x = 0);
	Classic(const char* m, const Cd& d);
	virtual ~Classic();
	virtual void report() const;
	Classic& operator=(const Classic& d);
};
