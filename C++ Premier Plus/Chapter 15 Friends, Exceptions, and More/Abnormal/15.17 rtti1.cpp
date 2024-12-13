//#include <cstdlib>
//#include <iostream>
//#include <random>
//#include <exception>
//using std::cout;
//class Grand {
//private:
//	int hold;
//public:
//	Grand(int i = 0):hold(i){}
//	virtual void Speak() const { cout << "I'm a grand class!\n"; }
//	virtual int Value() const { return hold; }
//};
//class Superb :public Grand {
//public:
//	Superb(int i = 0) :Grand(i) {}
//	virtual void Speak() const { cout << "I'm a superb class!\n"; }
//	virtual void Say() const { cout << "I hold the superb value of " << Value() << "!\n"; }
//};
//class magnificent:public Superb {
//private:
//	char ch;
//public:
//	magnificent(char c = 'A', int i = 0) :Superb(i), ch(c) {}
//	virtual void Speak() const { cout << "I'm a magnificent class!\n"; }
//	virtual void Say() const { cout << "I hold the character " << ch << "and the interger " << Value() << "!\n"; }
//};
//
//Grand* Getone();
//int main() {
//	srand(time(0));
//	Grand* pg;
//	Superb* ps;
//	for (int i = 0; i < 5; i++)
//	{
//		pg = Getone();
//		pg->Speak();
//		if (ps = dynamic_cast<Superb*>(pg)) {
//			ps->Say();
//		}
//		if (typeid(magnificent) == typeid(*pg)) {
//			cout << "Yes! You're really magnificent!\n";
//			cout << "Type name: " << typeid(*pg).name() << std::endl;
//		}
//	}
//}
//Grand* Getone() {
//	Grand* p;
//	switch (rand() % 3) {
//	case 0:
//		p = new Grand(rand() % 100);
//		break;
//	case 1:
//		p = new Superb(rand() % 100);
//		break;
//	case 2:
//		p = new magnificent(('A' + rand() % 26), rand() % 100);
//		break;
//	}
//	return p;
//}