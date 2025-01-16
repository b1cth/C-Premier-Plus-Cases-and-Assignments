#include "stonewt.h"
//构造函数可以使用explicit取消隐式类型转换
Stonewt::Stonewt() {
	stone = pds_left = pounds = 0;
	status = stn;
}
Stonewt::Stonewt(double lbs) {
	stone = (int)lbs / Lbs_per_stn;
	pds_left = (int)lbs % Lbs_per_stn + lbs - (int)lbs;
	pounds = lbs;
	status = Format::float_pnd;
}
Stonewt::Stonewt(int stn, double lbs) {
	stone = stn;
	pds_left = lbs;
	pounds = lbs + stn * Lbs_per_stn;
	status = Format::stn;
}
Stonewt::~Stonewt() {

}

void Stonewt::set_status(Stonewt::Format newStat) {
	status = newStat;
}

Stonewt Stonewt::operator+(const Stonewt& st) const {
	return Stonewt(pounds + st.pounds);
}
Stonewt Stonewt::operator-(const Stonewt& st) const {
	return Stonewt(pounds - st.pounds);
}
Stonewt Stonewt::operator*(const Stonewt& st) const {
	return Stonewt(pounds * st.pounds);
}

std::ostream& operator<<(std::ostream& os, Stonewt st) {
	if (st.status == Stonewt::Format::stn) {
		using namespace std;
		os << st.stone << " stones, " << st.pds_left << " pounds.";
	}
	else if (st.status == Stonewt::Format::float_pnd) {
		os<<st.pounds << " pounds.";
	}
	else if (st.status == Stonewt::Format::int_pnd) {
		os << int(st.pounds) << " pounds.";
	}
	return os;
}
std::istream& operator>>(std::istream& is, Stonewt& st) {
	is >> st.pounds;
	//更新其它成员变量
	st.stone = int(st.pounds) / Stonewt::Lbs_per_stn;
	st.pds_left = int(st.pounds) % Stonewt::Lbs_per_stn;
	return is;
}
bool Stonewt::operator==(const Stonewt& s) const {
	return pounds == s.pounds;
}
bool Stonewt::operator!=(const Stonewt& s) const {
	return pounds != s.pounds;
}
bool Stonewt::operator<(const Stonewt& s) const {
	return pounds < s.pounds;
}
bool Stonewt::operator<=(const Stonewt& s) const {
	return pounds <= s.pounds;
}
bool Stonewt::operator>(const Stonewt& s) const {
	return pounds > s.pounds;
}
bool Stonewt::operator>=(const Stonewt& s) const {
	return pounds >= s.pounds;
}
