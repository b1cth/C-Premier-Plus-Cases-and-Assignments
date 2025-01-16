//#include "13.7 brass.h"
#include "acctABC.h"
const int clientNumMax = 2;
int main() {
	using std::cout;
	using std::cin;
	using std::endl;
	using std::string;

	string tempName;
	long tempAccnt;
	double tempbal;
	int accountType;
	double tempmaxloan;
	double temprate;
	acctABC* p_clients[clientNumMax];
	for (int i = 0; i < clientNumMax; i++)
	{
		cout << "Please enter client's name: ";
		cin >> tempName;
		cout << "Please enter the account number: ";
		cin >> tempAccnt;
		cout << "Please enter the openning balance: ";
		cin >> tempbal;
		cout << "Press 1 to open a Brass account\nPress 2 to open a Brass Plus account: ";
		while (cin >> accountType && (accountType != 1 && accountType != 2)) {
			cout << "Invalid type, try again!\n";
		}
		if (accountType == 1) {
			p_clients[i] = new Brass(tempName, tempAccnt, tempbal);
		}
		if (accountType == 2) {
			cout << "Please enter the max loan amount: ";
			cin >> tempmaxloan;
			cout << "Please enter the loan rate: ";
			cin >> temprate;
			p_clients[i] = new BrassPlus(tempName, tempAccnt, tempbal, tempmaxloan, temprate);
		}
	}
	for (int i = 0; i < clientNumMax; i++)
	{
		p_clients[i]->ViewAccount();
		cout << endl;
	}
	for (int i = 0; i < clientNumMax; i++)
	{
		delete p_clients[i];
	}
	return 0;
}