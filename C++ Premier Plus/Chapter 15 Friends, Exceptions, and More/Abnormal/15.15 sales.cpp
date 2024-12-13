#include "15.14 sales.h"
#include <iostream>
Sales::Bad_Index::Bad_Index(int i, const std::string& s) :std::logic_error(s),bi(i){

}
Sales::Sales(int i) :year(i) {
	
}
Sales::Sales(int i, const double* gr, int n) :year(i) {
	int lim = (n < MONTHS) ? n : MONTHS;
	int m;
	for (m = 0; m < lim; m++)
	{
		gross[m] = gr[m];
	}
	for (; m < MONTHS; m++)
	{
		gross[m] = gr[m];
	}
}
double Sales::operator[](int i) const {
	if (i < 0 || i >= MONTHS) {
		throw Bad_Index(i);
	}
	return gross[i];
}
double& Sales::operator[](int i) {
	if (i < 0 || i >= MONTHS) {
		throw Bad_Index(i);
	}
	return gross[i];
}
LabeledSales::nbad_index::nbad_index(const std::string& s, int i, const std::string& bs) :Sales::Bad_Index(i, bs), lbl(s) {

}
LabeledSales::LabeledSales(const std::string s, int y) :label(s), Sales(y) {

}
LabeledSales::LabeledSales(const std::string s , int y , const double* gr, int n) :label(s), Sales(y, gr, n) {

}
double LabeledSales::operator[](int i) const {
	if (i < 0 || i >= MONTHS) {
		throw nbad_index(Label(), i);
	}
	return Sales::operator[](i);
}
double& LabeledSales::operator[](int i) {
	if (i < 0 || i >= MONTHS) {
		throw nbad_index(label, i);
	}
	return Sales::operator[](i);
}