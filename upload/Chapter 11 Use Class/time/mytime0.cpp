#include "mytime0.h"
Time::Time(int h, int m) {
	hours = h;
	minutes = m;
}
void Time::addMin(int m) {
	minutes += m;
	hours += minutes / 60;
	minutes %= 60;
}
void Time::addHour(int h) {
	hours += h;
}
void Time::reset(int h, int m) {
	hours = h;
	minutes = m;
}
Time Time::operator+(const Time& t) {
	Time sum;
	sum.minutes = minutes + t.minutes;
	sum.hours = hours + t.hours+sum.minutes/60;
	sum.minutes %= 60;
	return sum;
}
Time Time::operator-(const Time& t) {
	Time minus;
	if ((hours * 60 + minutes) > (t.hours*60 + t.minutes)) {
		if (minutes < t.minutes) {
			minus.minutes = abs(minutes - t.minutes);
			minus.hours = hours - t.hours - 1;
		}
		else {
			minus.minutes = minutes - t.minutes;
			minus.hours = hours - t.hours;
		}
		return minus;
	}
	else {
		minus.minutes = 0;
		minus.hours = 0;
		return minus;
	}
	
}
Time Time::operator*(double m) {
	Time multiply;
	multiply.minutes = m * (hours * 60 + minutes);
	multiply.hours = multiply.minutes / 60;
	multiply.minutes %= 60;
	return multiply;
}
Time operator*(double m, const Time& t) {
	Time multiply;
	multiply.minutes = m * (t.hours * 60 + t.minutes);
	multiply.hours = multiply.minutes / 60;
	multiply.minutes %= 60;
	return multiply;
}
void Time::show() const {
	using namespace std;
	std::cout;
	cout << hours << " hours " << minutes << " minutes\n";
}

std::ostream& operator<<(std::ostream& os, const Time& t) {
	os << t.hours << " hours, " << t.minutes << " minutes." << std::endl;
	return os;
}

