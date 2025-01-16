//#include "18.6 somedefs.h"
//#include <functional>
//typedef std::function<double(double)> fd;
//double dub(double x) { return 2.0 * x; }
//double square(double x) { return x * x; }
//int main() {
//	using std::cout, std::endl;
//	double y = 1.21;
//	cout << "Function pointer dub:\n";
//	cout << " " << use_f(y, fd(dub)) << endl;
//	cout << "Function pointer square:\n";
//	cout << " " << use_f(y, fd(square)) << endl;
//
//	cout << "Function object Fp:\n";
//	cout << " " << use_f(y, fd(Fp(5.0))) << endl;
//	cout << "Function object Fq:\n";
//	cout << " " << use_f(y, fd(Fq(5.0))) << endl;
//
//	cout << "Lambda expression 1: \n";
//	cout << " " << use_f(y, fd([](double u) {return u * u;})) << endl;
//	cout << "Lambda expression 2: \n";
//	fd eflambda2 = [](double u) {return u * u / 2.0;};
//	cout << " " << use_f(y, eflambda2) << endl;
//}