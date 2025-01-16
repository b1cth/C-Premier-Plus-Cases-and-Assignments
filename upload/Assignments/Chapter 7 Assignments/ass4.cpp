#include "functions.h";
long double  probability(int range, int pick) {
	long double result = 1.0;
	long double n;
	unsigned p;
	for (n = range, p = pick; p > 0; n--, p--)
	{
		result = result * n / p;
	}
	return result;
}

//main
//int main()
//{
//	long double field_result = probability(47, 5);
//	long double special_result = probability(27, 1);
//	long double result = 1.0 / (field_result * special_result);
//	cout << "The chance of winning is: " << std::fixed
//		<< std::setprecision(8) << result * 100 << "%." << endl;
//
//}
