#include "14.4 studenti.h"
#include <string>
double Student::average() const {
	if (ArrayDB::size() > 0) {
		return ArrayDB::sum() / ArrayDB::size();
	}
	return 0;
}
const std::string& Student::Name() const {
	return (const std::string&) *this;
}
double& Student::operator[](int i) {
	return ArrayDB::operator[](i);
}
double Student::operator[](int i) const {
	return ArrayDB::operator[](i);
}

std::istream& operator>>(std::istream& is, Student& st) {
	is >> (std::string&) st;
	return is;
}
std::istream& getline(std::istream& is, Student& st) {
	getline(is, (std::string&) st);
	return is;
}
std::ostream& Student::arr_out(std::ostream& os) const {
	int i;
	int limit = ArrayDB::size();
	if (limit > 0)
	{
		for (i = 0; i < limit; i++)
		{
			os << ArrayDB::operator[](i);
			if (i % 5 == 4) {
				os << std::endl;
			}
		}
		if (i % 5 != 0) {
			os << std::endl;
		}
	}
	else {
		os << "Empty Array!" << std::endl;
	}
	return os;
}
std::ostream& operator<<(std::ostream& os, const Student& st) {
	os << "std::string: " << (const std::string&) st << std::endl;
	st.arr_out(os);
	return os;
}