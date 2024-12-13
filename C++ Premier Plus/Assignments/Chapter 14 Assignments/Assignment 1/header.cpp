#include "header.h"
Wine::Wine()
	: name("No Name"), saveYear(0),
	productionYear(), bottles(),
	data(productionYear, bottles) {
}
Wine::Wine(const char* l, int y, const int yr[], const int bot[]) :name(l), saveYear(y),
			productionYear(yr,y), bottles(bot, y),
			data(productionYear,bottles){
}
Wine::Wine(const char* l, int y) :name(l), saveYear(y), 
		productionYear(y), bottles(y),
		data(productionYear, bottles) {
}
void Wine::GetBottles() {
	using std::cout;
	using std::cin;
	cout << "Enter " << name << " for " << saveYear << " year(s).\n";
	for (int i = 0; i < saveYear; i++)
	{
		cout << "Enter year: ";
		cin >> productionYear[i];
		cout << "Enter bottles for that year: ";
		cin >> bottles[i];
	}
}
const std::string& Wine::Label() const {
	return name;
}
int Wine::sum() {
	int total = 0;
	for (int i = 0; i < bottles.size(); i++)
	{
		total += bottles[i];
	}
	return total;
}
void Wine::show() const{
	using std::cout, std::endl;
	cout << "Wine: " << name << endl;
	cout << "\t Year \tBottles:\n";
	for (int i = 0; i < productionYear.size(); i++)
	{
		cout << "\t " << productionYear[i] << "\t" << bottles[i] << endl;
	}
}