#pragma once
#include <iostream>
class stock {
private:
	char* name;
	long shares;
	double share_val;
	double total_val;
	void set_tot() {
		total_val = shares * share_val;
	}
public:
	stock(const char* n = "No Name", long m_shares = 0, double m_share_val = 0);
	~stock();
	void acquire(const char* co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	friend std::ostream& operator<<(std::ostream& os, const stock& st);
	const stock& topval(const stock& s) const;
};

