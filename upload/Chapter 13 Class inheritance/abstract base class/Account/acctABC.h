#pragma once
#include <string>
#include <iostream>
class acctABC {
private:
	std::string fullname;
	long accntNumber;
	double balance;
protected:
	const std::string& showname()const { return fullname; }
	const double showbalance()const { return balance; }
public:
	acctABC(const std::string& s = "nullbody", long an = 1, double bal = 0.0);
	virtual ~acctABC();
	void Deposit(double amt);
	virtual void ViewAccount() const = 0;
	virtual void Withdraw(double amt) = 0;
};
class Brass :public acctABC{
public:
	Brass(const std::string& s = "nullbody", long an = 1, double bal = 0.0);
	virtual void Withdraw(double amt);
	virtual void ViewAccount() const;
	virtual ~Brass() {}
};

class BrassPlus :public acctABC{
private:
	double maxLoan;
	double rate;
	double owesbank;
public:
	BrassPlus(const std::string& s = "nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const acctABC& s, double ml = 500, double r = 0.11125);
	virtual void Withdraw(double amt);
	virtual void ViewAccount()const;
	void resetMax(double m) { maxLoan = m; }
	void resetRate(double r) { rate = r; }
	void resetOwes() { owesbank = 0; }
	~BrassPlus() {}
};