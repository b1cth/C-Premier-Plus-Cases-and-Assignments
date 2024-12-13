//#include "13.7 brass.h"
//Brass::Brass(const std::string& s, long an, double bal) {
//	fullname = s;
//	accntNumber = an;
//	balance = bal;
//}
//void Brass::Deposit(double amt) {
//	if (amt <= 0) {
//		std::cout << "Please enter the correct amount.\n";
//		return;
//	}
//	balance += amt;
//}
//void Brass::Withdraw(double amt) {
//	if (amt > balance) {
//		std::cout << "The amount of withdraw exceed the balance.\n";
//		return;
//	}
//	else if (amt <= 0) {
//		std::cout << "Please enter the correct amount.\n";
//		return;
//	}
//	balance -= amt;
//}
//double Brass::Balance() const {
//	return balance;
//}
//void Brass::ViewAccount() const {
//	using std::cout;
//	using std::endl;
//	cout << "Account Name: " << fullname << endl;
//	cout << "Account Number: " << accntNumber << endl;
//	cout << "Balance: " << balance << endl;
//}
//
////BrassPlus Methods
//BrassPlus::BrassPlus(const std::string& s, long an, double bal, double ml, double r):Brass(s, an, bal){
//	maxLoan = ml;
//	rate = r;
//	owesbank = 0;
//}
//BrassPlus::BrassPlus(const Brass& s, double ml, double r) :Brass(s) {
//	maxLoan = ml;
//	rate = r;
//	owesbank = 0;
//}
//void BrassPlus::Withdraw(double amt) {
//	using std::cout;
//	using std::endl;
//	double bal = Balance();
//	if (amt <= bal) {
//		Brass::Withdraw(amt);
//	}
//	else if (amt <= bal+maxLoan-owesbank) {
//		double advance = amt - bal;
//		owesbank = advance * (1 + rate);
//		cout << "Bank Advance: $" << advance << endl;
//		cout << "Finance Charge: $" << owesbank << endl;
//		Deposit(advance);
//		Brass::Withdraw(amt);
//	}
//	else if (amt <= 0) {
//		std::cout << "Please enter the correct amount.\n";
//		return;
//	}
//	else {
//		std::cout << "Credit limit exceeded, transaction cancelled.\n";
//	}
//}
//void BrassPlus::ViewAccount()const {
//	using std::cout;
//	using std::endl;
//	Brass::ViewAccount();
//	cout << "Maximum Loan: $" << maxLoan << endl;
//	cout << "Owed to bank: $" << owesbank << endl;
//	cout << "Loan Rate: " << rate * 100 << "%\n";
//}