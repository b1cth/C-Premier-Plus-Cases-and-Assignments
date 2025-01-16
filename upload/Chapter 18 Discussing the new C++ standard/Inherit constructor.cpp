//#include <iostream>
//class c1 {
//public:
//	int fn(int j) {};
//	double fn(double w){}
//	void fn(const char* s){}
//};
//class c2 :public c1 {
//public:
//	using c1::fn;
//	double fn(double) {}
//};
//
//class BS {
//	int q;
//	double w;
//public:
//	BS():q(0),w(0){}
//	BS(int k):q(k),w(100){}
//	BS(double x):q(-1),w(x){}
//	BS(int x,double y):q(x),w(y){}
//	void show() const { std::cout << q << ", " << w << std::endl; }
//};
//
//class DR :public BS {
//	short j;
//public:
//	using BS::BS;
//	DR():j(-100){}
//	DR(double x) :BS(2 * x), j(int(x)) {}
//	DR(int i) :j(-2), BS(i, 0.5 * i){}
//	void show() const { std::cout << j << ", "; BS::show(); }
//};
//int main() {
//	/*c2 temp;
//	int k = temp.fn(3);
//	double z = temp.fn(2.4);*/
//
//	DR o1;
//	DR o2(18.81);
//	DR o3(10, 1.8);
//
//}