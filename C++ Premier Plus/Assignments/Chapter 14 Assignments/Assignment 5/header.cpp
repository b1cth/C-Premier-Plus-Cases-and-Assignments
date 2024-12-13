#include "header.h"
using std::cout, std::cin, std::endl;
abstr_emp::abstr_emp():fname("No Name"),lname("No Name"),job("No Job"){}
abstr_emp::abstr_emp(const string& fn, const string& ln, const string& j)
	:fname(fn), lname(ln),job(j){}
void abstr_emp::showAll() const {
	cout << "Name: " << fname << " " << lname << endl;
	cout << "Job: " << job << endl;
}
void abstr_emp::setAll() {
	cout << "Enter the new First name: ";
	cin >> fname;
	cout << "Enter the new Last name: ";
	cin >> lname;
	cout << "Enter the new job: ";
	cin >> job;
}
std::ostream& operator<<(std::ostream& os, const abstr_emp& e) {
	os << "Name: " << e.fname << " " << e.lname << endl;
	os << "Job: " << e.job << endl;
	return os;
}
abstr_emp::~abstr_emp(){}
employee::employee():abstr_emp(){}
employee::employee(const std::string& fn, const string& ln, const string& j):abstr_emp(fn,ln,j){}
void employee::showAll() const {
	abstr_emp::showAll();
}
void employee::setAll() {
	abstr_emp::setAll();
}
manager::manager() :abstr_emp(),inchargeof(0){}
manager::manager(const std::string& fn, const string& ln, const string& j, int ico)
	:abstr_emp(fn, ln, j),inchargeof(ico){}
manager::manager(const abstr_emp& e, int ico):abstr_emp(e), inchargeof(ico){}
manager::manager(const manager& m) :abstr_emp(m),inchargeof(m.inchargeof){}
void manager::show() const {
	cout << "In charge of " << inchargeof << endl;
}
void manager::showAll() const {
	abstr_emp::showAll();
	show();
	cout << endl;
}
void manager::set() {
	cout << "Set in charge of: ";
	cin >> inchargeof;
}
void manager::setAll() {
	abstr_emp:setAll();
	set();
}
fink::fink() :abstr_emp() ,reportsto("No Name"){}
fink::fink(const std::string& fn, const string& ln, const string& j, const string& rpo)
	:abstr_emp(fn,ln,j), reportsto(rpo) {}
fink::fink(const abstr_emp& e, const string& rpo) :abstr_emp(e),reportsto(rpo){}
fink::fink(const fink& f):abstr_emp(f), reportsto(f.reportsto){}
void fink::show() const {
	cout << "Reports to " << reportsto << endl;
}
void fink::showAll() const {
	abstr_emp::showAll();
	show();
	cout << endl;
}
void fink::set() {
	cout << "Set reports to ";
	cin >> reportsto;
}
void fink::setAll() {
	abstr_emp:setAll();
	set();
}
highfink::highfink():manager(),fink(){}
highfink::highfink(const std::string& fn, const string& ln, const string& j, const string& rpo, int ico)
	:abstr_emp(fn,ln,j),fink(fn,ln,j,rpo),manager(fn, ln, j, ico){}
highfink::highfink(const abstr_emp& e, const string& rpo, int ico):abstr_emp(e),fink(e,rpo),manager(e,ico){}
highfink::highfink(const fink& f, int ico):fink(f), manager(f,ico){}
highfink::highfink(const manager& m, const string& rpo):manager(m),fink(m,rpo){}
highfink::highfink(const highfink& h):abstr_emp(h),manager(h,h.InChargeOf()),fink(h,h.ReportsTo()){}
void highfink::showAll() const {
	abstr_emp::showAll();
	manager::show();
	fink::show();
	cout << endl;
}
void highfink::setAll() {
	abstr_emp::setAll();
	manager::set();
	fink::set();
}