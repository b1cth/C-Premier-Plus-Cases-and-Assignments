//#include <iostream>
//class useless {
//private:
//	int n;
//	char* pc;
//	static int ct;
//public:
//	useless();
//	explicit useless(int k);
//	useless(int k, char ch);
//	useless(const useless& f);
//	useless(useless&& f);
//	~useless();
//	useless operator+(const useless& f) const;
//	void showObject() const;
//	void showdata() const;
//};
//int useless::ct = 0;
//useless::useless() {
//	++ct;
//	n = 0;
//	pc = nullptr;
//	std::cout << "Default constructor called; number of objects: " << ct << std::endl;
//}
//useless::useless(int k):n(k) {
//	++ct;
//	pc = new char[n];
//	std::cout << "int constructor called; number of objects: " << ct << std::endl;
//	showObject();
//}
//useless::useless(int k, char ch):n(k) {
//	++ct;
//	pc = new char[n];
//	for (int i = 0; i < n; i++)
//	{
//		pc[i] = ch;
//	}
//	std::cout << "int, char constructor called; number of objects: " << ct << std::endl;
//	showObject();
//}
//useless::useless(const useless& f):n(f.n) {
//	++ct;
//	pc = new char[n];
//	for (int i = 0;i < n;i++) {
//		pc[i] = f.pc[i];
//	}
//	std::cout << "copy constructor called; number of objects: " << ct << std::endl;
//	showObject();
//}
//useless::useless(useless&& f) :n(f.n) {
//	++ct;
//	pc = f.pc;
//	f.pc = nullptr;
//	f.n = 0;
//	std::cout << "move constructor called; number of objects: " << ct << std::endl;
//	showObject();
//}
//useless::~useless() {
//	std::cout << "Deconstructor called; objects left: " << --ct << std::endl;
//	std::cout << "deleted object:\n";
//	showObject();
//	delete[] pc;
//}
//useless useless::operator+(const useless& f) const {
//	std::cout << "Entering operator+()\n";
//	useless temp = useless(n + f.n);
//	for (int i = 0; i < n; i++)
//	{
//		temp.pc[i] = pc[i];
//	}
//	for (int i = n; i < temp.n; i++)
//	{
//		temp.pc[i] = f.pc[i-n];
//	}
//	std::cout << "temp object:\n";
//	std::cout << "Leaving operator+()\n";
//	return temp;
//}
//void useless::showObject() const {
//	std::cout << "Number of elements: " << n << std::endl;
//	std::cout << "Data address: " << (void*)pc << std::endl;
//}
//void useless::showdata() const {
//	if (n == 0) {
//		std::cout << "(Object empty)";
//	}
//	else {
//		for (int i = 0; i < n; i++)
//		{
//			std::cout << pc[i];
//		}
//	}
//	std::cout << std::endl;
//}
//
//
//int main() {
//	using namespace std;
//	useless one(10, 'x');
//	useless two = one;
//	useless three(20, 'o');
//	useless four = std::move(one + three);
//	cout << "Object one: ";
//	one.showdata();
//	cout << "Object two: ";
//	two.showdata();
//	cout << "Object one: ";
//	three.showdata();
//	cout << "Object three: ";
//	four.showdata();
//}