#include "header.h";
void setSales(Sales& s, const double* ar, int n) {
	int i = 0;
	for ( i; i < n&&i<QUARTERS; i++)
	{
		s.sales[i] = ar[i];
	}
	//可以初始化结构体简化逻辑
	/*for ( i; i < QUARTERS; i++)
	{
		s.sales[i] = 0;
	}*/
}
void setSales(Sales& s) {
	double total = 0;
	s.max = s.sales[0];
	s.min = s.sales[0];
	for (int i = 0; i < QUARTERS; i++)
	{
		total += s.sales[i];
		if (s.max < s.sales[i]) {
			s.max = s.sales[i];
		}
		if (s.min > s.sales[i]) {
			s.min = s.sales[i];
		}
	}
	s.average = total / QUARTERS;
}
void showSales(const Sales& s) {
	for (int i = 0; i < QUARTERS; i++)
	{
		cout << "QUARTER Sale #" << i << " : " << s.sales[i] << endl;
	}
	cout << "Average Sale : " << s.average<<endl;
	cout << "Max Sale : " << s.max << endl;
	cout << "Min Sale : " << s.min << endl;
}