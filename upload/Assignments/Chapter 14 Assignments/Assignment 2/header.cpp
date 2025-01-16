#include "header.h"
Wine::Wine()
	: name("No Name"), saveYear(0), PairArray() {

}
Wine::Wine(const char* l, int y, const ArrayInt& yr, const ArrayInt& bt)
			:name(l), saveYear(y), PairArray(yr,bt){

}
Wine::Wine(const char* l, int y) :name(l), saveYear(y), PairArray(ArrayInt(y), ArrayInt(y)) {

}
void Wine::GetBottles() {
	using std::cout;
	using std::cin;
	int yr = 0;
	int bt = 0;
	cout << "Enter " << name << " for " << saveYear << " year(s).\n";
	for (int i = 0; i < saveYear; i++)
	{
		cout << "Enter year: ";
		cin >> rtproductionYear()[i];
		cout << "Enter bottles for that year: ";
		cin >> rtbottles()[i];
	}
}
const std::string& Wine::Label() const {
	return name;
}
int Wine::sum() {
	int total = 0;
	for (int i = 0; i < rtbottles().size(); i++)
	{
		total += rtbottles()[i];
	}
	return total;
}
void Wine::show() const {
	using std::cout, std::endl;
	cout << "Wine: " << name << endl;
	cout << "\t Year \tBottles:\n";
	for (int i = 0; i < rtproductionYear().size(); i++)
	{
		cout << "\t " << rtproductionYear()[i] << "\t" << rtbottles()[i] << endl;
	}
}