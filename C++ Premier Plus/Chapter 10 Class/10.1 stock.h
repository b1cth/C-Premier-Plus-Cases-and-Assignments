#pragma once
#include <string>

class stock {
private:
	std::string company;
	long shares;
	double share_val;
	double total_val;
	void set_tot() {
		total_val = shares * share_val;
	}
public:
	void acquire(const std::string& co, long n, double pr);
	void buy(long num, double price);
	void sell(long num, double price);
	void update(double price);
	void show()const;
	stock(std::string m_company , long m_shares , double m_share_val );
	//构造函数声明
	stock();
	~stock();//析构函数
	const stock& topval(const stock& s) const;
};

