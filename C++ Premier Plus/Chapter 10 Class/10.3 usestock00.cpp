//#include <iostream>
//#include"10.1 stock.h"
//using namespace std;
//
//int main() {
//	//stock fluffy_the_cat=stock("Benny",120,69.33);//显式调用构造函数
//	//stock temp{ "Pussy",55,60 };  隐式调用函数
//	//fluffy_the_cat.acquire("NanoSmart", 20, 12.5);
//	stock stock1("NanoSmart", 12, 20.0);
//	stock1.show();
//	stock stock2 = stock("Boffo Objects", 2, 2.0);
//	stock2.show();
//
//	cout << "Assigning stock1 to stock2:\n";
//	stock2 = stock1;
//	stock2.show();
//	cout << "Listing stock1 and stock2:\n";
//	stock1.show();
//	stock2.show();
//
//	cout << "using a constructor to reset an object\n";
//	stock1 = stock("Nifty Foods", 10, 50.0);//利用temp赋值，temp被销毁后调用析构函数
//	cout << "Revised stock1: \n";
//	stock1.show();
//	cout << "Done\n";
//
//	cout << endl;
//	cout << endl << endl;
//	const stock& ref=stock1.topval(stock2);
//	ref.show();
//	return 0;
//}