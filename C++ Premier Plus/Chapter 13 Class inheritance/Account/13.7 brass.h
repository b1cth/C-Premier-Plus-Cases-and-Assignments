#pragma once
#include <string>
#include <iostream>
class Brass {
private:
	std::string fullname;
	long accntNumber;
	double balance;
public:
	Brass(const std::string& s = "nullbody", long an = 1, double bal = 0.0);
	void Deposit(double amt);
	virtual void Withdraw(double amt);
	double Balance() const;
	virtual void ViewAccount() const;
	virtual ~Brass() { std::cout << "Brass" << std::endl; };
};

class BrassPlus :public Brass {
private:
	double maxLoan;
	double rate;
	double owesbank;
public:
	BrassPlus(const std::string& s = "nullbody", long an = -1, double bal = 0.0, double ml = 500, double r = 0.11125);
	BrassPlus(const Brass& s, double ml = 500, double r = 0.11125);
	virtual void Withdraw(double amt);
	virtual void ViewAccount()const;
	void resetMax(double m) { maxLoan = m; }
	void resetRate(double r) { rate = r; }
	void resetOwes() { owesbank = 0; }
	~BrassPlus() { std::cout << "BrassPlus" << std::endl; }
};