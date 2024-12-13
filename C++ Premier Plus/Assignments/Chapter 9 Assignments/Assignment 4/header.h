#pragma once
#include <iostream>
#include <string>
using namespace std;
namespace SALES {
	const int QUARTERS = 4;
	struct Sales {
		double sales[QUARTERS]={};//通过初始化 s.sales 数组为 0
		double average;
		double max;
		double min;
	};
}
using namespace SALES;
void setSales(Sales& s, const double* ar, int n);
void setSales(Sales& s);
void showSales(const Sales& s);