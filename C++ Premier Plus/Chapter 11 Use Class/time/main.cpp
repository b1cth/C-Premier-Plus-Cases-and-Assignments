#include "mytime0.h"

int main()
{
	using std::cout;
	using std::endl;
	Time planning;
	Time coding(2, 40);
	Time fixing(5, 55);
	Time total;

	cout << "panning time = ";
	planning.show();
	cout << endl;

	cout << "coding time = ";
	coding.show();
	cout << endl;

	cout << "fixing time = ";
	fixing.show();
	cout << endl;

	total = coding.operator+(fixing) + fixing;
	cout << "Total time: ";
	total.show();
	cout << endl;

	total = 9 * coding;
	total.show();

	total = fixing * 6;
	total.show();

	total = coding-fixing;
	total.show();

	cout <<"Time: "<<total;

	std::ofstream outFile("output.txt");
	if (outFile.is_open()) {
		outFile << total;
		outFile.close();
	}
}
