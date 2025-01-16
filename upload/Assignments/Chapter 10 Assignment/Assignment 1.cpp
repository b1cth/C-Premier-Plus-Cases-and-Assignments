#include "header.h"
void BankAccount::showInfo() {
	using namespace std;
	cout << "Name: " << name << endl;
	cout << "Account: " << account << endl;
	cout << "Saving: " << saving << " $" << endl;
	std::cout << endl;
}
double BankAccount::deposit(double amount) {
	using namespace std;
	saving += amount;
	cout << "Desposit Succefull." << endl;
	cout << "Total Saving: " << saving << endl;
	std::cout << endl;
	return saving;
}
double BankAccount::withdraw(double amount) {
	using namespace std;
	saving -= amount;
	cout << "Withdraw Succefull." << endl;
	cout << "Total Saving: " << saving << endl;
	std::cout << endl;
	return saving;
}
//constructor function
BankAccount::BankAccount(const char* ch, const char* ac, double m) {
	strcpy_s(name, ArSize, ch);
	strcpy_s(account, ArSize, ac);
	saving = m;
}
//default constructor function
BankAccount::BankAccount() {
	strcpy_s(name, ArSize, "No Name");
	strcpy_s(account, ArSize, "No Account");
	saving = 0;
}
BankAccount::~BankAccount() {
	using namespace std;
	cout << "Bye..." << endl;
}