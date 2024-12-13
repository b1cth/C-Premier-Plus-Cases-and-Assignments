#include <iostream>
struct debts {
	char name[50];
	double amount;
};

template <typename sp>
sp SumArray(sp* para, int n) {
	sp total = 0;
	for (int i = 0; i < n; i++)
	{
		total += para[i];
	}
	return total;
}

template <typename sp>
sp SumArray(sp** para, int n) {
	sp total = 0;
	for (int i = 0; i < n; i++)
	{
		total += *para[i];
	}
	return total;
}

//main
//int main() {
//	using namespace std;
//	int things[6] = { 12,31,548,51,885,945 };
//	debts mr_E[3]{
//		{"Ima Wolma",2400.0 },
//		{"Ura Foxe",1300.0},
//		{"Tby Stout",1600.0}
//	};
//	double* pd[3];
//	for (int i = 0; i < 3; i++)
//	{
//		pd[i] = &mr_E[i].amount;
//	}
//	std::cout << SumArray(things, 6);
//	std::cout << SumArray(pd, 3);
//}