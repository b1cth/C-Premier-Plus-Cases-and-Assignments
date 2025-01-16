#include "10.1 stock.h"
#include <iostream>

void stock::acquire(const std::string& co, long n, double pr) {
	company = co;
	if (n < 0) {
		std::cout << "numbers of shares can't be negative;" <<
			company << " shares are set to 0." << std::endl;
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
			company << " numbers are set to 0." << std::endl;
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
void stock::show()const {
	using std::cout;
	using std::endl;
	cout << "company: " << company<<endl;
	cout << "shares: " << shares << endl;
	cout << "price for each share: " << share_val << endl;;
	cout << "total valuve: " << total_val << endl;
}

stock::stock(std::string m_company , long m_shares, double m_share_val) {
	std::cout << "calling constructor function." << std::endl;
	company = m_company;
	if (m_shares < 0) {
		std::cout << "numbers of shares can't be negative;" <<
			company << " shares are set to 0." << std::endl;
		shares = 0;
	}
	else {
		shares = m_shares;

	}
	share_val = m_share_val;
	set_tot();
}//构造函数定义

stock::stock() {
	std::cout << "calling default construction function." << std::endl;
	company = "Error";
	shares = 0; 
	share_val = 0;
	total_val = 0;
}
//析构函数
stock::~stock() {
	std::cout << company<<" bye" << std::endl;
}

const stock& stock::topval(const stock& s) const {
	if (s.total_val > total_val) {
		return s;
	}
	else {
		return *this;
	}
}