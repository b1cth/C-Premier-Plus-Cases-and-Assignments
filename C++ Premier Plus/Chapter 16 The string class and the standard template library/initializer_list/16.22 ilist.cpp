#include <initializer_list>
#include <vector>
#include <algorithm>
#include <iostream>
double sum(std::initializer_list<double> li);
double average(std::initializer_list<double> dil);

int main() {
	using std::cout;
	cout << "List 1 sum = " << sum({ 2,3,4 }) << ", ave = " << average({ 2,3,4 }) << std::endl;

	std::initializer_list<double> dl{ 1.1,2.2,3.3,4.4,5.5 };
	cout << "List 2 sum = " << sum(dl) << ", ave = " << average(dl) << std::endl;

	dl = { 16.0, 25.0, 36.0, 40.0, 64.0 };
	cout << "List 3 sum = " << sum(dl) << ", ave = " << average(dl) << std::endl;
	//initializer_list的迭代器类型为const，因此您不能修改initializer_list中的值：
}
double sum(std::initializer_list<double> li) {
	double total = 0;
	for (auto i = li.begin(); i !=li.end(); i++)
	{
		total += *i;
	}
	return total;
}
double average(std::initializer_list<double> dil) {
	int size = dil.size();
	double total = sum(dil);
	double avg = total / (double)size;
	return avg;
}