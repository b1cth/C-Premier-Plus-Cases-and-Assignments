//#include <algorithm>
//#include <list>
//#include <iostream>
//#include <iterator>
//#include <string>
//
//template<typename T> 
//class Toobig {
//private:
//	T cutoff;
//public:
//	Toobig(const T& t) :cutoff(t) {}
//	bool operator()(T& t) { return t > cutoff; }
//};
//void outint(int n) { std::cout << n << " "; }
//
//int main() {
//	using std::cout;
//	using std::endl;
//	using std::list;
//
//	Toobig<int> t100(100);//limit 100
//	int vals[10] = { 50,100,90,180,60,210,415,88,188,230 };
//	list<int> yadayada;
//	std::copy(vals, vals + 10, std::back_inserter(yadayada));
//	list<int> etcetera{ 50,100,90,180,60,210,415,88,188,201 };
//	cout << "Original lists: \n";
//	copy(yadayada.begin(), yadayada.end(), std::ostream_iterator<int, char>(cout, " "));
//	cout << endl;
//	std::for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//
//	yadayada.remove_if(t100);
//	etcetera.remove_if(Toobig(200));
//	cout << "Trimmed lists: \n";
//	copy(yadayada.begin(), yadayada.end(), std::ostream_iterator<int, char>(cout, " "));
//	cout << endl;
//	std::for_each(etcetera.begin(), etcetera.end(), outint);
//	cout << endl;
//}