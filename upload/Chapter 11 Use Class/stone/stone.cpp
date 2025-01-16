#include "11.16 stonewt.h"
void display(const Stonewt& st, int n);
//int main() {
//	using std::cout;
//	Stonewt incognito = 275;
//	Stonewt wolfe(285, 7);
//	Stonewt taft(21, 8);
//	cout << "----------------\n";
//	incognito.show_lbs();
//	cout << "----------------\n";
//	wolfe.show_stn();
//	cout << "----------------\n";
//	taft.show_lbs();
//
//	incognito = 276.8;    //隐式转换使用Stonewt(double)函数
//	taft = 65.25;
//	cout << "----------------\n";
//	incognito.show_lbs();
//	taft.show_stn();
//	cout << "----------------\n";
//	display(taft, 3);
//	cout << "----------------\n";
//	display(230, 3); //230从int转换为double 然后double隐式转换使用构造函数
//
//	return 0;
//}

void display(const Stonewt& st, int n) {
	for (int i = 0; i < n; i++)
	{
		st.show_lbs();
	}
}