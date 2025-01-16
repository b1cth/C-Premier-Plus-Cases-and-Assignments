#include "acctABC.h"
acctABC::acctABC(const std::string& s, long an, double bal) {
	fullname = s;
	accntNumber = an;
	balance = bal;
}
acctABC::~acctABC() {}
void acctABC::Deposit(double amt) {
	if (amt <= 0) {
		std::cout << "Please enter the correct amount.\n";
		return;
	}
	balance += amt;
}
void acctABC::ViewAccount() const {
	using std::cout;
	using std::endl;
	cout << "Account Name: " << fullname << endl;
	cout << "Account Number: " << accntNumber << endl;
	cout << "Balance: " << balance << endl;
}
void acctABC::Withdraw(double amt) {
	balance -= amt;
}

Brass::Brass(const std::string& s, long an, double bal):acctABC(s,an,bal){}

void Brass::Withdraw(double amt) {
	if (amt > showbalance()) {
		std::cout << "The amount of withdraw exceed the balance.\n";
		return;
	}
	else if (amt <= 0) {
		std::cout << "Please enter the correct amount.\n";
		return;
	}
	acctABC::Withdraw(amt);
}

void Brass::ViewAccount() const {
	acctABC::ViewAccount();
}

//BrassPlus Methods
BrassPlus::BrassPlus(const std::string& s, long an, double bal, double ml, double r) :acctABC(s, an, bal) {
	maxLoan = ml;
	rate = r;
	owesbank = 0;
}
BrassPlus::BrassPlus(const acctABC& s, double ml, double r) :acctABC(s) {
	maxLoan = ml;
	rate = r;
	owesbank = 0;
}
void BrassPlus::Withdraw(double amt) {
	using std::cout;
	using std::endl;
	double bal = showbalance();
	if (amt <= bal) {
		acctABC::Withdraw(amt);
	}
	else if (amt <= bal + maxLoan - owesbank) {
		double advance = amt - bal;
		owesbank = advance * (1 + rate);
		cout << "Bank Advance: $" << advance << endl;
		cout << "Finance Charge: $" << owesbank << endl;
		Deposit(advance);
		acctABC::Withdraw(amt);
	}
	else if (amt <= 0) {
		std::cout << "Please enter the correct amount.\n";
		return;
	}
	else {
		std::cout << "Credit limit exceeded, transaction cancelled.\n";
	}
}
void BrassPlus::ViewAccount()const {
	using std::cout;
	using std::endl;
	acctABC::ViewAccount();
	cout << "Maximum Loan: $" << maxLoan << endl;
	cout << "Owed to bank: $" << owesbank << endl;
	cout << "Loan Rate: " << rate * 100 << "%\n";
}