#include "stock.h"
stock::stock(const char* n, long m_shares, double m_share_val) {
	int len = strlen(n);
	name = new char[len + 1];
	strcpy_s(name, len + 1, n);
	shares = m_shares;
	share_val = m_share_val;
	set_tot();
}
stock::~stock() {
	delete[] name;
}
void stock::acquire(const char* co, long n, double pr) {
	strcpy_s(name, strlen(co) + 1, co);
	if (n < 0) {
		std::cout << "numbers of shares can't be negative;" <<
			name << " shares are set to 0." << std::endl;
		shares = 0;
	}
	else {
		shares = n;

	}
	share_val = pr;
	set_tot();
}
void stock::buy(long num, double price) {
	if (num < 0) {
		std::cout << "numbers of shares purchased can't be negative;" <<
			name << " numbers are set to 0." << std::endl;
		num = 0;
	}
	else {
		shares += num;
	}
	share_val = price;
	set_tot();
}
void stock::sell(long num, double price) {
	if (num < 0) {
		std::cout << "numbers of shares sell can't be negative;" <<
			"transaction is aborted" << std::endl;
	}
	else if (num > shares) {
		std::cout << "numbers of share sell can't be greater than shares you have."
			<< "transaction is aborted" << std::endl;
	}
	else {
		shares -= num;
		share_val = price;
		set_tot();
	}
}
void stock::update(double price) {
	share_val = price;
	set_tot();
}
std::ostream& operator<<(std::ostream& os, const stock& st) {
	using namespace std;
	std::cout << "Company Name: " << st.name << std::endl;
	cout << "Shares: " << st.shares << endl;
	cout << "Share value each: " << st.share_val << endl;
	cout << "Total Value: " << st.total_val << endl;
	return os;
}

const stock& stock::topval(const stock& s) const {
	if (s.total_val > total_val) {
		return s;
	}
	else {
		return *this;
	}
}