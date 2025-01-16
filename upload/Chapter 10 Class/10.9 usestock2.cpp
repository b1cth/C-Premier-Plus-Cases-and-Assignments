//#include "10.1 stock.h"
//#include <iostream>
//const int STKS = 20;
//int main() {
//	using std::cout;
//	using std::endl;
//	stock stocks[STKS]{
//		stock("NanoSmart",12,20.0),
//		stock("Boffo Objects",200,2.0),
//		stock("MoniLithic Obelisks",130,3.25),
//		stock("Fleep Enterprises",60,6.5)
//	};
//	cout << "Stock holdings:\n";
//	int st;
//	for (st = 0; st < STKS; st++) {
//		stocks[st].show();
//	}
//	const stock* top = &stocks[0];
//	for (st = 1; st < STKS; st++) {
//		top=&(top->topval(stocks[st]));
//	}
//	cout << "\nMost Valuable holding: \n";
//	top->show();
//	return 0;
//}