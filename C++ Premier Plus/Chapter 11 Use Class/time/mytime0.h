#pragma once
#include <iostream>
#include<fstream>
#include <vector>
class Time {
private:
	int hours;
	int minutes;
public:
	Time(int h=0, int m=0);
	void addMin(int m);
	void addHour(int h);
	void reset(int h, int m);
	Time operator+(const Time& t);
	Time operator-(const Time& t);
	Time operator*(double m);	
	friend Time operator*(double m, const Time& t);
	void show() const;
	friend std::ostream& operator<<(std::ostream& os, const Time& t);
	
};
